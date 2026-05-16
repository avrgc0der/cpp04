/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:49:13 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 04:35:33 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->Animal::type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
	std::cout << "Animal copy constructor called" << std::endl;
}
Animal	&Animal::operator=(Animal const &animal)
{
	if (this != &animal)
		this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Default animal destructor called" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "*Animal sound*" << std::endl;
}

std::string	const Animal::getType(void) const
{
	return (this->type);
}
