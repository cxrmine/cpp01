/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:54:12 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/09 14:54:12 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "USAGE:\n\t"
                 "./bin/zombiehorde [integer (1 - 10000)] [name]"
              << '\n';
    return EXIT_FAILURE;
  }

  Zombie *zombie = zombieHorde(atoi(argv[ZOMBIE_QUANTITY]), argv[ZOMBIE_NAME]);

  if (zombie == NULL) {
    std::cout << "Error: you either input an empty string, "
                 "a negative number or "
                 "a number above the maximum zombies you can allocate"
              << '\n';
    return EXIT_FAILURE;
  }
  delete[] zombie;

  return EXIT_SUCCESS;
}
