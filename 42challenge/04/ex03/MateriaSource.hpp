#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "Character.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource : public AMateria
{
	AMateria*	inventory[INVENTORY];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &oldMateriaSource);
	MateriaSource& operator= (const MateriaSource &oldMateriaSource);

	void 		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
};

#endif