/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoshahi < enoshahi@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 04:45:20 by enoshahi          #+#    #+#             */
/*   Updated: 2026/05/16 04:46:17 by enoshahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "I have an idea!";
}

Brain::Brain (const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

Brain	&Brain::operator=(const Brain &brain)
{
	if (this != &brain)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain()
{
}