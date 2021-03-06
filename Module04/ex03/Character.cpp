/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:04:38 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/15 13:04:40 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{

}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character & Character::operator=(Character const &character)
{
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character._inventory[i];
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int id)
{
	if (this->_inventory[id] != NULL)
	{
		delete this->_inventory[id];
		this->_inventory[id] = NULL;
	}
}

void Character::use(int id, ICharacter &target)
{
	if (this->_inventory[id] != NULL)
		this->_inventory[id]->use(target);
}