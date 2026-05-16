/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:15:46 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:04:17 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->Animal::type = "Cat";
	std::cout << CYAN << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &cat_) : Animal(cat_)
{
	std::cout << CYAN << "Cat copy constructor called" << RESET << std::endl;
}

Cat	&Cat::operator=(Cat const &cat)
{
	if (this != &cat)
		this->type = cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << CYAN << "Cat default destructor called" << RESET << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << RED << "*Meow meow*" << RESET << std::endl;
}