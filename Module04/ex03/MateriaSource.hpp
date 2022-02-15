/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:11:53 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/15 17:46:34 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materia[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &materia);

		void learnMateria(AMateria *new_m);
		AMateria* createMateria(std::string const & type);
};