/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:03:46 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 13:03:46 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon* weapon);
	~HumanA();

	void attack();
private:
	Weapon *weapon = NULL;
	std::string name;
};

#endif // !HUMANA_HPP
