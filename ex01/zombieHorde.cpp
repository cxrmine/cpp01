/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:05:18 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/09 11:05:18 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string.h>

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0 || name.empty() || N > MAX_ALLOCATE_ZOMBIES)
    return (NULL);

  Zombie *zombie = new Zombie[N];

  if (zombie != NULL)
    return (NULL);

  for (size_t i = 0; i < N; i++) {
    zombie[i].setName(name);
  }

  return zombie;
}
