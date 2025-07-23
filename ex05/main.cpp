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

int main(int argc, char *argv[]) {
  Harl *harl = new Harl();
  harl->complain("DEBUG");
  harl->complain("INFO");
  harl->complain("WARNING");
  harl->complain("ERROR");
  delete harl;
  return 0;
}
