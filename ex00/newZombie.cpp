/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 13:47:12 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/08 13:47:12 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie *newZombie(std::string name) {
  if (name.empty()) {
    std::cout << "Error: please use a valid name for the Zombie" << '\n';
  }

  Zombie *zombie = new Zombie(name);
  return zombie;
}
