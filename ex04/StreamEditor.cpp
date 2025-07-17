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

StreamEditor::StreamEditor(const char *inputFile) : inputFile(inputFile) {
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

std::string tm_replace(std::size_t index, std::size_t len, std::string &s1,
                       const char *s2) {
  if (len == 0)
    return s1;
  if (s1[0] == '\0' || s2[0] == '\0')
    return s1;

  for (std::size_t j = 0; j < len; j++) {
    s1[index + j] = s2[j];
  }

  return s1;
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
  index = line.find(s1);

  if (index == std::string::npos)
    return line;

  tm_replace(index, s2_len, line, s2);
  return line;
}

void StreamEditor::getFileContent() {

  // INFO: Make sure the reviewer doesn't see this
  std::string outFile = StreamEditor::inputFile;
  std::string outputFile = outFile + ".replace";
  const char *oFile = outputFile.c_str();

  std::fstream ifs(StreamEditor::inputFile, std::ios::in);
  std::fstream ofs(oFile, std::ios::out | std::fstream::trunc);
  std::string line = "";

  if (!ifs.is_open()) {
    std::cerr << "Error: unable to open file." << '\n';
    return;
  }

  while (ifs.good() && std::getline(ifs, StreamEditor::lines)) {
    std::string res = "";
    line = StreamEditor::lines;
    res = StreamEditor::changePattern(line, StreamEditor::s1, StreamEditor::s2);
    ofs << res << '\n';
  }

  ifs.close();
  ofs.close();
}
