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

#ifndef STREAM_EDITOR_HPP
#define STREAM_EDITOR_HPP

#include <fstream>
#include <string>

#define MAX_ARGS_NUMBER 4
#define FILENAME 1
#define STRING_TO_CHANGE 2
#define STRING_FOR_CHANGE 3

class StreamEditor {
public:
  StreamEditor(const char *inputFile);
  ~StreamEditor();

  void getFileContent();

  const char *outputFile;
  char *s1;
  char *s2;

private:
  std::string changePattern(std::string line, const char *s1, const char *s2);

  const char *inputFile;
  std::string lines;
};

#endif
