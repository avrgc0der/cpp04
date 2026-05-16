/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:21:37 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 04:34:26 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	this->type = wronganimal.type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	if (this != &wronganimal)
		this->type = wronganimal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout <<"*WrongAnimal sounds*" << std::endl;
}

std::string	const WrongAnimal::getType(void) const
{
	return (this->type);
}