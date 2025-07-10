/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:58:45 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/08 12:58:45 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {
  if (name.empty()) {
    std::cout << "Error: please use a valid name for the zombie" << '\n';
    return;
  }
}

Zombie::Zombie() { return; }

Zombie::~Zombie() {
  std::cout << "[DEBUG] Zombie \"" << Zombie::name
            << "\" has died (destroyed in c++ terms)"
            << "\n";
}

void Zombie::announce(void) {
  std::cout << Zombie::name << ": " << "BraiiiiiiinnnzzzZ..." << '\n';
}

void Zombie::setName(std::string name) {
  Zombie::name = name;
  return;
}
