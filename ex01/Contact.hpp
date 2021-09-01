/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:22:43 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/09/01 20:04:35 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		~Contact();

		void	setFirstName(std::string firstName);
		void	setLastName(std::string firstName);
		void	setNickName(std::string firstName);
		void	setPhoneNumber(std::string firstName);
		void	setDarkestSecret(std::string firstName);
};