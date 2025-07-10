/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:57:40 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 13:57:40 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(std::string type) : type(type) {
  if (type.empty())
    return;
}

Weapon::~Weapon() { return; }

void Weapon::setType(std::string type) {
  Weapon::type = type;
  return;
}
