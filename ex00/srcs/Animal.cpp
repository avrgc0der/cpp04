/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:49:13 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 14:34:41 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->Animal::type = "Animal";
	std::cout << CYAN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
	std::cout << CYAN << "Animal copy constructor called" << RESET << std::endl;
}
Animal	&Animal::operator=(Animal const &animal)
{
	if (this != &animal)
		this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << CYAN << "Default animal destructor called" << RESET << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << RED << "*Animal sound*" << RESET << std::endl;
}

std::string	const Animal::getType(void) const
{
	return (this->type);
}
