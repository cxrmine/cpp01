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
#include <algorithm>
#include <cstddef>
#include <fstream>
#include <iostream>
#include <iterator>
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

std::string StreamEditor::changePattern(std::string line, const char *s1,
                                        const char *s2) {
  std::size_t counter = 0;
  bool changeTrigger = false;

  if (s1 == NULL || s2 == NULL)
    return line;
  if (line.empty())
    return line;
  if (s1[0] == '\0' || s2[0] == '\0')
    return line;

  std::size_t s1_len = tm_strlen(s1);
  std::size_t s2_len = tm_strlen(s2);

  for (std::string::iterator it = line.begin(), end = line.end(); it != end;
       ++it) {
    char c = *it;
    for (std::size_t i = 0; i < s1_len; i++) {
      if (s1[i] == c)
        counter++;
    }
  }
}

void StreamEditor::getFileContent() {
  std::fstream ifs(StreamEditor::inputFile, std::ios::in);
  std::fstream ofs(StreamEditor::outputFile, std::ios::out);
  std::string line = "";

  if (!ifs.is_open() || !ofs.is_open()) {
    std::cerr << "Error: unable to open file." << '\n';
    return;
  }

  while (ifs.good() && std::getline(ifs, StreamEditor::lines)) {
    line = StreamEditor::lines;

    ofs << StreamEditor::lines << '\n';
  }

  ifs.close();
  ofs.close();
}
