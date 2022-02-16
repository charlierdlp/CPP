/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:45:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/16 13:50:08 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <string>

class Form
{
	private:
		const std::string _name;
		bool			_signed;
		unsigned int	_gradeSign;
		unsigned int	_gradeExecute;


	public:
		Form(/* args */);
		~Form();
};


