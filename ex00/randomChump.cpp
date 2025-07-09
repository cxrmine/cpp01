/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 13:54:02 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/08 13:54:02 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

void randomChump(std::string name) {
  if (name.empty()) {
    std::cout << "Error: please use a valid name for the zombie" << '\n';
    return;
  }

  Zombie *zombie = new Zombie(name);
  zombie->announce();
}
