/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 03:39:21 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 04:47:19 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		const Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog &dog_);
		~Dog(void);
		Dog	&operator=(Dog const &dog);
		void makeSound(void) const;
};

#endif