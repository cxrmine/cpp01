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

Harl::Harl() { return; }

Harl::~Harl() { return; }
