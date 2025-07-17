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

StreamEditor::StreamEditor(std::string outputFile, std::string inputFile) {
  StreamEditor::outputFile = outputFile;
  StreamEditor::inputFile = inputFile;
  return;
}

StreamEditor::~StreamEditor() { return; }

std::string StreamEditor::getFileContent() {
  if (!StreamEditor::fs.is_open()) {
    std::cerr << "Error: unable to open file." << '\n';
  }

  StreamEditor::fs.open(StreamEditor::outputFile, std::ios::out);
  StreamEditor::fs >> lines;
  StreamEditor::fs.close();

  return StreamEditor::lines;
}
