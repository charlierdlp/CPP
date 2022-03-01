/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:53:33 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 13:03:26 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	this->target = src.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int random;
	Form::execute(executor);

	random = rand() % 2;
	std::cout << "RIZZZ RIZZZ ";
	if (!random)
		std::cout << this->target << " has been robotomized unsuccessfully" << std::endl;
	else
		std::cout << this->target << " has been robotomized successfully" << std::endl;


}