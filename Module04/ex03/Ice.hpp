#include "AMateria.hpp"

class Ice : public AMateria
{	
	private:
		std::string _type;

	public:
		Ice();
		Ice(std::string const & type);
		Ice(const AMateria &copy);
		~Ice();
		Ice	&operator=(const Ice &ice);

		AMateria* clone() const;
		void use(ICharacter& target);
};