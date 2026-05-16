/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:21:37 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:02:57 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << YELLOW << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	this->type = wronganimal.type;
	std::cout << YELLOW << "WrongAnimal copy constructor called!" << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	if (this != &wronganimal)
		this->type = wronganimal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << YELLOW << "WrongAnimal destructor called" << RESET << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << YELLOW << "*WrongAnimal sounds*" << RESET << std::endl;
}

std::string	const WrongAnimal::getType(void) const
{
	return (this->type);
}