#include "Int.hpp"

Int::Int()
{

}

Int::Int(std::string& literal)
	:Converter(literal)
{
}

Int::~Int()
{

}

Int::Int(const Int& ref)
	:Converter(ref)
{

}

Int&	Int::operator=(const Int& ref)
{
	Converter::operator=(ref);
	return (*this);
}

void	Int::converToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "int: "<< static_cast<int>(this->getCharValue()) << std::endl;
		return ;
	}
	
	int	i = static_cast<int>(std::atoi(literal.c_str()));
	if (isPossibleNumber(literal))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
}
