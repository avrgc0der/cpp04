/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:15:46 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/18 15:42:24 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->Animal::type = "Cat";
	this->brain = new Brain();
	std::cout << CYAN << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat_) : Animal(cat_)
{
	this->Animal::type = cat_.type;
	this->brain = new Brain(*cat_.brain);
	std::cout << CYAN << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	std::cout << CYAN << "Cat copy assignment constructor called" << std::endl;
	if (this != &cat)
	{
		this->type = cat.type;
		this->brain = cat.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << CYAN << "Cat default destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow meow." << std::endl;
}