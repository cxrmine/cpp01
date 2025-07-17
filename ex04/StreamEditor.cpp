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
