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

Zombie::Zombie(std::string name) {
  if (name.empty()) {
    std::cout << "Error: please use a bvalid name for the zombie" << '\n';
    return;
  }

  Zombie::name = name;
}

Zombie::~Zombie() {
  std::cout << "[DEBUG] Zombie \"" << Zombie::name
            << "\" has died (destroyed in c++ terms)";
}

void Zombie::announce(void) {
  std::cout << Zombie::name << ": " << "BraiiiiiiinnnzzzZ..." << '\n';
}
