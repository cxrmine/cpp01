/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:58:22 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/08 12:58:22 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

#define MAX_ALLOCATE_ZOMBIES 10000

class Zombie {
public:
  Zombie() = default;
  Zombie(std::string name);
  ~Zombie();

  void announce(void);
  void setName(std::string name);

private:
  std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif // !ZOMBIE_HPP
