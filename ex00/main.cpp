/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:22:57 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/09 10:22:57 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main() {
  std::string first_zombie = "talal";
  std::string second_zombie = "kyllian";

  Zombie *zombie = newZombie(first_zombie);
  zombie->announce();

  randomChump(second_zombie);

  delete zombie;
  return 0;
}
