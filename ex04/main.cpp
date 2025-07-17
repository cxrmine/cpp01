/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:43:57 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/17 09:43:57 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"
#include <iostream>
#include <string>

int main() {
  std::string fileName = "sedisforlosers";
  std::string fileContent;
  StreamEditor *sed = new StreamEditor(fileName, fileName + ".replace");
  fileContent = sed->getFileContent();
  std::cout << fileContent << '\n';
  return 1;
}
