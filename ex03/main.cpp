/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:55:26 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 13:55:26 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
int main() {
  Weapon *first_weapon = new Weapon("comically large blade");
  HumanA *walid = new HumanA("walid", first_weapon);
  walid->attack();
  first_weapon->setType("comically large staff");
  walid->attack();
  delete walid;
  delete first_weapon;

  return 0;
}
