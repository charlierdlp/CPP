#pragma once

#include <iostream>

class Karen
{
	private:
	
		void  	debug();
		void  	info();
		void	warning();
		void 	error();

	public:
			
		Karen();
		~Karen();
		void	complain(std::string message);
};