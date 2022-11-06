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

void	Int::convertToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "int: "<< static_cast<int>(this->getCharValue()) << std::endl;
		return ;
	}
	
	if (isPossibleNumber(literal))
	{
		int	i = static_cast<int>(std::atoi(literal.c_str()));
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: Impossible" << std::endl;
}
