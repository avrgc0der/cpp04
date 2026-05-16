/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi <enoshahi@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:22:59 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 14:38:41 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal &animal);
		Animal &operator=(Animal const &animal);
		virtual ~Animal(void);
		std::string const getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif