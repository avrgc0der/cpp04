/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 03:54:14 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:15:48 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H
#include <iostream>
# define RESET "\e[0m"
# define RED "\e[31m"
# define YELLOW "\e[33m"
# define CYAN "\e[36m"

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		std::string const	getType(void) const;
		void makeSound(void) const;
};

#endif