/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:44:10 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/22 20:41:23 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	this->target = src.target;
	return (*this);
}

void ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	this->check_execute(executor);

	std::string fileName = this->target + "_shrubbery";
	std::ofstream file(fileName);
	if (file.is_open())
	{
		file << "																																													" << std::endl;
	    file << "                                                                                                                                                                                   " << std::endl;          
        file << "                                                                                                                                                                                   " << std::endl;      
        file << "                                                                                              YYYYYY      YYYY                                                                     " << std::endl;      
        file << "                                                                                          YYXXXXXXXXXXYYXXXXYY                                                                     " << std::endl;      
        file << "                                                                YY    YYYYYY              YYXXXXXXXXXXXXXXXXXXYYYY                                                                 " << std::endl;      
        file << "                                                        YYYYXXYYXXXXXXXXXXXXXXYY      YYYYXXZZZZXXXXXXXXZZXXXXXXYYYY                                                               " << std::endl;      
        file << "                                                    YYYYXXXXXXXXXXXXXXXXXXXXXXZZXXYYYYXXXXXXZZXXXXXXXXXXXXXXXXXXXXXXXXYYYY                                                         " << std::endl;      
        file << "                                                  YYYYXXXXZZXXXXXXZZZZXXXXXXXXXXYYXXXXXXXXXXXXXXXXZZXXXXXXXXXXXXZZXXXXXXXXXXYY                                                     " << std::endl;      
        file << "                                                YYXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXZZXXZZXXXXXXXXZZXXZZZZXXXXXXXXYYYYYY                                               " << std::endl;      
        file << "                                                YYXXXXZZXXXXXXZZZZZZZZZZXXXXXXZZXXZZZZZZXXXXXXXXXXXXZZZZZZZZZZZZZZXXZZZZZZXXXXXXXXXXYY                                             " << std::endl;      
        file << "                                        YYYYYYYYXXXXXXXXXXXXZZZZZZZZZZXXXXXXXXZZZZZZZZXXXXXXXXXXXXXXXXZZXXXXXXXXZZZZZZXXZZZZXXZZXXXXYY                                             " << std::endl;      
        file << "                                        XXXXXXXXXXZZXXZZZZXXXXZZZZZZZZXXXXXXXXXXZZWWZZZZZZZZZZZZXXXXXXXXXXXXXXXXZZXXZZZZZZXXZZXXXXXXXXYYYY                                         " << std::endl;      
        file << "                                    YYXXXXXXXXXXZZXXXXZZZZZZZZWWZZXXXXXXZZZZZZZZZZXXZZZZZZZZXXZZZZXXXXXXZZXXXXXXXXXXZZZZZZZZXXZZZZXXXXXXYY                                         " << std::endl;      
        file << "                                  XXXXXXXXXXZZXXXXXXZZZZZZZZWWWWZZXXXXXXZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXZZZZZZXXXXXXZZZZXXXXYY                                         " << std::endl;      
        file << "                              YYYYXXXXZZZZXXZZXXXXXXXXZZWWWWWWWWXXXXXXXXXXZZZZZZZZZZZZZZZZXXZZZZZZZZWWZZXXXXXXXXXXXXXXZZZZXXXXXXXXZZZZZZXX                                         " << std::endl;      
        file << "                            YYXXXXXXXXXXZZXXXXXXXXXXXXXXZZZZZZZZXXXXZZZZZZZZZZZZXXZZZZZZXXXXZZZZXXZZZZZZZZZZZZZZZZXXXXZZZZWWZZZZZZZZZZXXXXXX                                       " << std::endl;      
        file << "                          YYZZZZZZXXXXXXZZZZXXXXXXZZZZZZZZXXXXXXZZZZZZZZWWZZZZZZZZZZZZZZXXZZXXZZZZZZWWZZZZZZZZZZZZZZXXZZXXZZZZZZZZWWZZZZZZXX                                       " << std::endl;      
        file << "                          YYXXXXXXZZZZZZZZZZXXXXZZXXZZZZZZZZZZXXXXXXZZZZZZZZZZXXXXXXXXZZZZXXZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXXZZZZWWZZZZZZXXYY                                       " << std::endl;      
        file << "                            XXXXZZXXZZZZZZZZZZZZZZZZZZZZZZZZZZZZXXZZZZZZZZWWXXZZXXZZXXZZZZZZWWWWZZZZZZZZXXZZXXXXXXXXXXZZXXXXZZZZZZZZXXXXXXXX                                       " << std::endl;      
        file << "                          YYXXZZZZZZZZZZZZZZZZZZWWZZWWZZZZZZXXZZZZWWZZZZZZZZZZXXZZZZXXXXXXXXZZWWZZZZXXXXZZXXZZZZZZZZZZXXZZXXXXXXXXXXZZZZXXXXYY                                     " << std::endl;      
        file << "                            XXZZZZZZZZZZZZWWZZWWZZZZZZWWZZZZWWWWZZWWZZZZZZXXXXXXXXZZXXZZZZZZZZZZZZXXXXXXZZZZZZZZZZZZZZZZXXXXXXXXXXXXXXZZXXXXXXYY                                   " << std::endl;      
        file << "                          XXXXZZZZZZZZZZZZZZXXZZZZZZZZZZZZWWWWWWWWWWZZZZZZZZZZXXZZWWZZWWZZZZWWWWZZXXXXZZYYZZZZWWZZZZXXXXXXXXXXXXXXXXZZZZXXXXZZXXYY                                 " << std::endl;      
        file << "                          YYYYXXXXZZZZZZXXXXZZZZZZWWWWZZZZXXXXZZZZZZZZZZZZZZZZZZZZZZWWWWWWZZZZZZZZZZZZWWZZZZZZWWZZXXXXXXXXXXZZZZZZZZZZZZZZZZXXXXYY                                 " << std::endl;      
        file << "                      YYXXXXXXXXXXZZZZXXXXZZZZZZXXZZZZZZXXXXZZZZZZZZZZZZZZZZZZZZWWWWZZZZZZZZZZZZZZZZWWZZZZZZZZZZXXZZZZZZZZZZZZXXZZZZZZZZZZZZXXXXXXXXYY                             " << std::endl;      
        file << "                    YYZZXXXXXXXXZZZZWWZZZZZZZZZZZZZZZZXXXXZZZZZZZZZZZZZZZZZZZZZZWWWWZZZZXXZZZZZZWWZZZZWWZZWWZZXXXXZZZZZZZZZZZZZZZZXXXXXXZZZZZZZZXXXXYY                             " << std::endl;      
        file << "                    XXXXXXXXXXZZZZZZZZZZZZZZZZXXZZXXZZZZZZXXXXXXZZZZZZZZZZZZWWWWZZZZZZZZZZZZZZZZZZZZZZZZWWWWZZZZZZZZZZZZZZXXZZXXZZXXXXZZZZZZZZZZXXYY                               " << std::endl;      
        file << "                    XXXXXXZZZZZZZZXXZZZZZZZZZZZZWWWWZZZZXXXXXXZZXXZZZZZZZZZZZZZZZZZZZZZZZZWWZZZZXXZZZZWWWWZZZZZZZZZZZZZZWWZZZZZZXXZZZZZZXXZZXXXXXXZZXXYY                           " << std::endl;      
        file << "                    XXZZZZZZXXXXZZZZZZZZZZWWXXXXZZZZXXXXXXZZZZZZZZZZZZZZZZZZZZZZZZZZZZWWXXXXXXXXZZWWZZZZZZZZZZZZWWZZZZZZZZZZZZXXZZZZZZZZZZZZXXXXZZXXXXXXXXYYYY                     " << std::endl;      
        file << "                    XXXXZZZZXXZZZZZZWWZZWWZZZZZZZZXXXXZZWWZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZXXZZZZZZZZZZZZZZZZZZZZZZZZZZWWZZZZZZXXZZXXXXZZXXXXXXXXXXXXXXXXXXXXXX                       " << std::endl;      
        file << "          YYYYXXYYXXXXXXXXXXZZZZZZZZZZZZWWZZZZZZZZZZXXZZWWWWWWWWZZWWZZZZWWZZXXZZZZZZZZZZZZZZZZZZXXZZWWZZZZXXZZWWZZZZZZZZZZZZZZZZZZXXXXXXXXXXZZXXZZXXXXXXXX                         " << std::endl;      
        file << "        XXXXXXXXXXXXXXXXXXZZZZZZZZXXXXZZWWWWWWWWWWWWZZZZWWWWWWZZWWWWWWZZZZZZZZZZZZZZZZZZZZWWZZZZXXZZZZXXZZXXXXZZZZZZZZZZXXZZZZZZZZZZZZZZZZZZWWZZWWZZZZXXZZXXXXXXYY                 " << std::endl;      
        file << "      YYXXXXXXXXXXXXZZZZZZZZXXXXXXXXZZZZWWZZZZZZZZZZZZWWWWZZWWWWZZZZZZWWZZZZZZZZZZZZZZZZZZZZXXXXXXXXZZXXZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZXXXXXXXX                 " << std::endl;      
        file << "      YYXXZZZZZZXXZZZZZZZZZZZZZZZZZZXXXXXXZZZZZZZZZZZZZZWWZZZZZZWWZZZZZZZZZZWWZZZZXXZZZZZZZZZZXXXXXXXXXXZZZZZZZZZZWWZZZZZZXXZZZZXXXXZZZZXXXXZZZZZZZZZZZZXXXXZZZZYY                 " << std::endl;      
        file << "      YYZZZZZZZZZZZZZZZZZZZZWWXXZZZZZZZZZZXXZZXXXXXXZZZZZZZZZZZZZZZZZZZZZZZZZZWWZZZZZZXXXXXXXXZZZZZZZZXXZZXXXXZZZZZZZZZZZZZZXXZZZZXXXXZZZZXXZZZZZZZZZZXXXXXXXXZZYY                 " << std::endl;      
        file << "        XXXXXXXXXXZZZZZZZZXXYYZZZZZZZZZZZZZZXXZZZZZZZZZZZZZZWWZZZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXZZZZZZZZXXZZZZZZZZZZZZWWZZXXZZZZZZZZZZZZZZZZZZZZZZXXZZZZZZXXXXZZZZXXYY               " << std::endl;      
        file << "      YYXXXX  YYZZXXZZZZZZZZXXZZZZZZXXZZZZZZXXZZZZZZZZWWWWWWWWXXZZZZZZZZZZZZZZZZXXXXXXXXZZZZZZZZWWZZZZZZXXXXWWWWZZZZZZZZZZWWZZZZZZZZZZZZXXXXZZXXZZXXZZXXZZZZWWZZXXYY               " << std::endl;      
        file << "                XXZZZZZZZZZZXXXXZZWWZZYYYYZZZZZZZZZZZZZZWWZZZZZZZZZZWWZZZZXXZZZZXXXXZZZZXXZZZZZZWWZZZZZZXXXXZZWWWWZZZZZZWWWWWWWWZZZZZZZZZZZZZZZZZZZZXXZZZZZZZZZZXX                 " << std::endl;      
        file << "                ZZZZZZXXXXXXYYYYZZZZZZXXXXXXZZXXYYZZXXXXZZXXZZZZWWZZZZWWZZYYYYWWZZZZXXYYZZZZZZZZZZZZXXXXXXZZZZZZZZ  XXXXYYXXZZZZZZXXZZZZZZZZZZZZZZXXXXXXZZXXXX                     " << std::endl;      
        file << "                YY      XXYY  YYXXZZXXXXXXYYYYXX  YYXXWWWWXXXXZZZZZZZZXXXX  YYXXZZZZYYXXWWZZWWZZZZZZZZZZXXXXZZ      YYYYYYYYYYZZZZXXXXXXZZZZXXZZZZZZZZZZZZXXXX                     " << std::endl;      
        file << "                      YYXXYY    YYXXYY    YYZZXXYYXXZZWWZZZZXXYYWWXXXXZZZZZZ  YYZZZZYYZZWWXXXXYYZZYY  YYZZXX          YYYY    XXZZZZZZXXZZXXXXZZZZZZXXZZXXXXXX                     " << std::endl;      
        file << "                                                YYZZZZZZZZXXYYYYYYXX    XXZZZZZZZZZZZZZZZZ    XXXX      YY              XXYYXXXXZZWWZZXXZZXXZZYYZZZZZZZZXXXXYY                     " << std::endl;      
        file << "                                                      YYYYXX                YYZZZZZZZZZZYY    ZZ                        YYXXYYXXWWWWYYYYYYXXXXZZYY  XXXXXXYY                       " << std::endl;      
        file << "                                                        YYYY                    ZZZZZZZZ    ZZXX                        XXZZXXZZXXZZ        XXXXYY                                 " << std::endl;      
        file << "                                                                                  ZZZZZZYYZZXX                            ZZYYXXYYYY          YY                                   " << std::endl;      
        file << "                                                                                  ZZZZZZXXYY                                                                                       " << std::endl;      
        file << "                                                                                  ZZZZZZXX                                                                                         " << std::endl;      
        file << "                                                                                  ZZZZZZYY                                                                                         " << std::endl;      
        file << "                                                                                  ZZZZZZYY                                                                                         " << std::endl;      
        file << "                                                                                  ZZXXZZXX                                                                                         " << std::endl;      
        file << "                                                                                  ZZZZZZXX                                                                                         " << std::endl;      
        file << "                                                                                  ZZZZZZZZ                                                                                         " << std::endl;      
        file << "                                                                                  XXZZZZZZ                                                                                         " << std::endl;      
        file << "                                                                                YYXXZZZZZZ                                                                                         " << std::endl;      
        file << "                                                                            YYXXXXZZZZZZZZXXYYYY                                                                                   " << std::endl;      
        file << "                                                              YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYXXYYXXYY                                                                     " << std::endl;      
		file << "																																													" << std::endl;
	}
	file.close();
}