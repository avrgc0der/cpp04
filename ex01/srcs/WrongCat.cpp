/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:23:17 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:15:28 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "wrong cat";
	std::cout << CYAN << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat)
{
	this->type = wrongcat.type;
	std::cout << CYAN << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &wrongcat )
{
	if (this != &wrongcat)
		this->type = wrongcat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << CYAN << "WrongCat destructor called" << std::endl;
}