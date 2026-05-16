/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:19:56 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 04:52:21 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->Animal::type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog_) : Animal(dog_)
{
	this->Animal::type = dog_.type;
	this->brain = new Brain(*dog_.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->type = dog.type;
		this->brain = dog.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete	this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Bark bark" << std::endl;
}