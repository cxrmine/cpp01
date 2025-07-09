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

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie();

  void announce(void);

private:
  std::string name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif // !ZOMBIE_HPP
