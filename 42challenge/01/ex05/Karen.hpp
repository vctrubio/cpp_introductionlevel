#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Karen{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Karen();
	~Karen();
	void	complain(std::string level);
	
};




//DEBUG
//INFO
//WARNING
//EROR
#endif
