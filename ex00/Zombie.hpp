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

#include <string>

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie();

  void announce(void);

private:
  std::string name;
};
