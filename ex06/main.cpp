/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:59:55 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/23 16:59:55 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[]) {
  (void)ac;
  Harl *harl = new Harl();
  std::string level(av[1]);

  harl->complain(level);
  delete harl;
  return 0;
}
