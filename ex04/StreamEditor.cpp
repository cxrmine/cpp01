/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:07:54 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/14 10:07:54 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"
#include <cstddef>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

StreamEditor::StreamEditor(const char *inputFile, const char *s1,
                           const char *s2)
    : inputFile(inputFile) {
  StreamEditor::s1 = s1;
  StreamEditor::s2 = s2;
  return;
}

StreamEditor::~StreamEditor() { return; }

std::size_t tm_strlen(const char *s) {
  std::size_t i = 0;

  if (s == NULL)
    return 0;
  if (s[0] == '\0')
    return 0;
  while (s[i])
    i++;
  return (i);
}

std::string tm_replace(std::size_t index, std::size_t len, char *s1,
                       const char *s2) {
  if (len == 0)
    return s1;
  if (s1[0] == '\0' || s2[0] == '\0')
    return s1;

  for (std::size_t i = index; i < len; i++) {
    s1[i] = s2[i];
  }

  return s2;
}

std::string StreamEditor::changePattern(std::string line, const char *s1,
                                        const char *s2) {
  std::size_t index = 0;

  if (s1 == NULL || s2 == NULL)
    return line;
  if (line.empty())
    return line;
  if (s1[0] == '\0' || s2[0] == '\0')
    return line;

  std::size_t s2_len = tm_strlen(s2);

  line.find(s1, index);

  if (index == std::string::npos)
    return line;

  tm_replace(index, s2_len, (char *)s1, s2);
  return s2;
}

void StreamEditor::getFileContent() {
  std::fstream ifs(StreamEditor::inputFile, std::ios::in);
  std::fstream ofs(strcat((char *)StreamEditor::inputFile, ".replace"),
                   std::ios::in | std::ios::out | std::ios::app);
  std::string line = "";

  if (!ifs.is_open()) {
    std::cerr << "Error: unable to open file." << '\n';
    return;
  }

  while (ifs.good() && std::getline(ifs, StreamEditor::lines)) {
    line = StreamEditor::lines;
    StreamEditor::changePattern(line, StreamEditor::s1, StreamEditor::s2);
    ofs << StreamEditor::lines << '\n';
  }

  ifs.close();
  ofs.close();
}
