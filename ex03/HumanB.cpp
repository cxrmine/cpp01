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

#include "Weapon.hpp"
#include <string>

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB {
public:
  HumanB();
  ~HumanB();

private:
  Weapon weapon;
  std::string name;
};

#endif // !HUMANB_HPP
