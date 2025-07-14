/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 09:55:49 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/14 09:55:49 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

class StreamEditor {
public:
  StreamEditor(std::string outputFile, std::string inputFile);
  ~StreamEditor();

  std::string getFileContent(std::string fileName);
  void setFileContent(std::string fileName);

private:
  std::string lines;
  std::fstream *outputFile;
  std::fstream *inputFile;
};
