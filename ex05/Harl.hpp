/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:23:30 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/07/23 16:23:30 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
	Harl();
	~Harl();

	void complain(std::string level);

private:
	void debug(void);
	void warning(void);
	void info(void);
	void error(void);
};

#endif
