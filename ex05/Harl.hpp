#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>
class Harl{
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	std::string arr[4];
	void (Harl::*func[4])(void);
	public:
	Harl();
	void complain ( std::string level );
};
#endif
