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
#include <cstring>
#include <iostream>
#include <string>

int main(int ac, char **av) {
  if (ac != MAX_ARGS_NUMBER) {
    std::cerr << "USAGE:\n\t"
              << "./bin/sedisforlosers [file] [<string to replace>] [<string "
                 "you want to replace>]"
              << '\n';
    return 1;
  }

  StreamEditor sed(av[FILENAME]);
  sed.s1 = av[STRING_TO_CHANGE];
  sed.s2 = av[STRING_FOR_CHANGE];

  if (strcmp(sed.s1, sed.s2) == 0) {
    std::cout << "Error: you cannot change a substring into itself..." << '\n';
    return 0;
  }

  sed.getFileContent();
  return 0;
}
