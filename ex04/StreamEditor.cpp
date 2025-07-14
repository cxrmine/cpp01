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
  StreamEditor::outputFile = new std::fstream(outputFile, std::ios::out);
  StreamEditor::inputFile = new std::fstream(inputFile, std::ios::in);
  return;
}

StreamEditor::~StreamEditor() { return; }
