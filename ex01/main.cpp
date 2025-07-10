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
    std::cout << "Invalid input: Please only add valid and non-negative "
                 "numerical values"
              << '\n';
    return EXIT_FAILURE;
  }

  Zombie *zombie = zombieHorde(atoi(argv[ZOMBIE_QUANTITY]), argv[ZOMBIE_NAME]);
  delete[] zombie;

  return EXIT_SUCCESS;
}
