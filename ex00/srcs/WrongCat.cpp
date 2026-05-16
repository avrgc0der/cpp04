/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:23:17 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:03:14 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "wrong cat";
	std::cout << YELLOW << "WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat)
{
	this->type = wrongcat.type;
	std::cout << YELLOW << "WrongCat copy constructor called" << RESET << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &wrongcat )
{
	if (this != &wrongcat)
		this->type = wrongcat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "WrongCat destructor called" << RESET << std::endl;
}