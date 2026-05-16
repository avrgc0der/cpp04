/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:19:56 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:04:22 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->Animal::type = "Dog";
	std::cout << CYAN << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &dog_) : Animal(dog_)
{
	this->Animal::type = dog_.type;
	std::cout << CYAN << "Dog copy constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
	if (this != &dog)
		this->type = dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog default destructor called" << RESET << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << RED << "*Bark bark*" << RESET << std::endl;
}