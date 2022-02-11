#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;
	
	public:
		Cure();
		Cure(std::string const & type);
		Cure(const AMateria &copy);
		~Cure();
		Cure	&operator=(const Cure &cure);

		AMateria* clone() const;
		void use(ICharacter& target);
};