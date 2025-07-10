/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:37:38 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 12:37:38 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string s = "HI THIS IS BRAIN";
  std::string *s_ptr = &s;
  std::string &stringREF = *s_ptr;
  return 0;
}
