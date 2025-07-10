/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:46:19 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 13:46:19 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon *weapon) : name(name) {
  if (name.empty())
    return;
  HumanA::weapon = weapon;
  return;
}

HumanA::~HumanA() { return; }

void HumanA::attack() {
  std::cout << HumanA::name << " attacks with their "
            << HumanA::weapon->getType() << '\n';
}
