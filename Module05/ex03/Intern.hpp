/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:33:31 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/23 19:46:14 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern &operator=(Intern const &src);
		class UnknownFormException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("[Intern] Unable to create form");
				}
		};
		Form *makePresidentialPardon(std::string &target);
		Form *makeShrubberyCreation(std::string &target);
		Form *makeRobotomyRequest(std::string &target);
		Form *makeForm(std::string name, std::string target);
};