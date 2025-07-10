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

#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string s = "HI THIS IS BRAIN";
  std::string *stringPTR = &s;
  std::string &stringREF = *stringPTR;

  std::cout << "Memory address of string variables: " << &s << '\n';
  std::cout << "Memory address held by stringPTR: " << &stringPTR << '\n';
  std::cout << "Memory address helf by stringREF" << stringREF << '\n';

  std::cout << "Value of the string variable: " << s << '\n';
  std::cout << "Value pointed by stringPTR: " << *stringPTR << '\n';
  std::cout << "Value pointed by stringREF: " << stringREF << '\n';

  return EXIT_SUCCESS;
}
