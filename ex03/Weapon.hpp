/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:59:44 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/10 12:59:44 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon {
public:
	Weapon();
	~Weapon();

	std::string getType();
	void setType(std::string type);
private:
	std::string type;
};
