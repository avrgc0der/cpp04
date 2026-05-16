/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:22:59 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 16:14:28 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
# include <iostream>
# include <string>
# define RESET "\e[0m"
# define RED "\e[31m"
# define YELLOW "\e[33m"
# define CYAN "\e[36m"

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal &animal);
		virtual ~Animal(void);
		Animal &operator=(Animal const &animal);
		std::string const getType(void) const;
		virtual void makeSound(void) const;
};

#endif