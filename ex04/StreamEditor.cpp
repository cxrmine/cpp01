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
#include <strings.h>

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

char *tm_replace(std::size_t index, std::size_t len, char *s1, const char *s2) {
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
  std::size_t s2_len = tm_strlen(s2);
  char tmp[1000];
  char *res = NULL;

  bzero(tmp, sizeof(tmp));
  line.copy(tmp, line.size());

  std::size_t index = 0;
  std::size_t search_pos = 0;

  while (true) {
    index = line.find(s1, search_pos);
    if (index == std::string::npos)
      break;
    search_pos = index + 2;
    res = tm_replace(index, s2_len, tmp, s2);
  }

  if (res == NULL)
    return line;
  std::size_t len_res = tm_strlen(res);
  std::string theCoolerRes(res, len_res);
  theCoolerRes = res;
  return theCoolerRes;
}

void StreamEditor::getFileContent() {

  // INFO: Make sure the reviewer doesn't see this
  std::string outFile = StreamEditor::inputFile;
  std::string outputFile = outFile + ".replace";
  const char *oFile = outputFile.c_str();

  std::fstream ifs(StreamEditor::inputFile, std::ios::in);
  std::fstream ofs(oFile, std::ios::out | std::fstream::trunc);
  std::string line = "";

  if (!ifs.is_open() || !ofs.is_open()) {
    std::cerr << "Error: unable to open file." << '\n';
    return;
  }

  while (ifs.good() && std::getline(ifs, StreamEditor::lines)) {
    std::string theCoolerRes;
    line = StreamEditor::lines;
    theCoolerRes =
        StreamEditor::changePattern(line, StreamEditor::s1, StreamEditor::s2);
    ofs << theCoolerRes << '\n';
  }
}
