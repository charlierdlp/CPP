/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:22:43 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/29 12:57:46 by cruiz-de         ###   ########.fr       */
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
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickname);
		void	setPhoneNumber(std::string phoneNumber);
		void	setDarkestSecret(std::string darkestSecret);
		bool	is_empty();

		std::string	getfirstName();
		std::string	getlastName();
		std::string	getnickName();
		std::string	getphoneNumber();
		std::string	getdarkestSecret();
};

