/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:54:16 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/22 20:48:53 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form)
{
	this->target = form.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->check_execute(executor);

	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}