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
#include <fstream>
#include <iostream>
#include <string>

StreamEditor::StreamEditor(const char *outputFile, const char *inputFile) {
  StreamEditor::inputFile = inputFile;
  StreamEditor::outputFile = outputFile;
  return;
}

StreamEditor::~StreamEditor() { return; }

std::string StreamEditor::getFileContent() {
  std::ifstream ifs(StreamEditor::inputFile);

  if (!ifs.is_open()) {
    std::cerr << "Error: unable to open file." << '\n';
    return NULL;
  }

  ifs.open(StreamEditor::inputFile, std::ios::out);
  while (std::getline(ifs, StreamEditor::lines, '\n'))
    ;

  ifs.close();
  return StreamEditor::lines;
}
