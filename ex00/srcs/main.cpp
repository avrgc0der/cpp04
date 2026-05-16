/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 03:41:32 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:07:11 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main( void )
{
	std::cout << YELLOW << "       EX00 MAIN FUNCTION" << RESET << std::endl;
	std::cout << YELLOW << "      ---------------------" << RESET << std::endl;
	std::cout << YELLOW << "           CONSTRUCTORS" << RESET << std::endl;
	std::cout << YELLOW << "      ---------------------" << RESET << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << std::endl;
	std::cout << YELLOW << "      ---------------------" << RESET << std::endl;
	std::cout << YELLOW << "          ANIMAL SOUNDS" << RESET << std::endl;
	std::cout << YELLOW << "      ---------------------" << RESET << std::endl;
	std::cout << RED << dog->getType() << " " << std::endl;
	std::cout << RED << cat->getType() << " " << std::endl;
	std::cout << RED << wrong_cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	wrong_cat->makeSound();

	std::cout << YELLOW << "      ---------------------" << RESET << std::endl;
	std::cout << YELLOW << "            DESTRUCTORS" << RESET << std::endl;
	std::cout << YELLOW << "      ---------------------" << RESET << std::endl;
	std::cout << std::endl;
	delete cat;
	delete dog;
	delete wrong_cat;
}