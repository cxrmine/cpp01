/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:11:58 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 13:11:58 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : name(name) {
  if (name.empty())
    return;
}

void HumanB::attack() {
  if (HumanB::weapon == NULL) {
    std::cout << HumanB::name
              << " tried to attack. "
                 "Unfortunately, they don't have a weapon..."
              << '\n';
    return;
  }

  std::cout << HumanB::name << " attacks with their "
            << HumanB::weapon->getType();
}
