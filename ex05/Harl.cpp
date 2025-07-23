/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:27:31 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/23 16:27:31 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

void Harl::complain(std::string level) {
  if (level.empty())
    return;

  std::size_t i = 0;
  std::string levelList[ARRAY_SIZE] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  while (i < ARRAY_SIZE) {
    if (levelList[i] == level)
      break;
  }

  switch (i) {
  case DEBUG:
    Harl::debug();
    break;
  case INFO:
    Harl::info();
    break;
  case WARNING:
    Harl::warning();
    break;
  case ERROR:
    Harl::error();
    break;
  default:
    break;
  }
}

void Harl::debug() {
  std::cout << "JE NAIME PAS LES BROCOLIS NI LES MACARONS, hein nannnn."
            << "\n";
}

void Harl::info() {
  std::cout << "ET SI TU PENSE QUE JE SUIS UN BEBE, BAH C PAS VRAIS, JAI "
               "MANGER DE LA SALADE BAH CT PAS MAUVAIS"
            << "\n";
}

void Harl::warning() {
  std::cout << "je n'aime pas les haricots vert, autant manger de la terre ou "
               "des verre de terre"
            << '\n';
}

void Harl::error() {
  std::cout << "Hola, can you explain this cpp code in fortnite terms because "
               "i am going to end my terms"
            << "\n";
}

Harl::Harl() { return; }

Harl::~Harl() { return; }
