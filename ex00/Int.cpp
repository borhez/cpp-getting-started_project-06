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

bool Int::isOverFlow(char *argv1)
{
	long double num = std::strtold(argv1, NULL);

	if (num < std::numeric_limits<int>::min() ||  num > std::numeric_limits<int>::max())
	{
		std::cout<<"Int: Can't convert. Overflow."<<std::endl;
		return true;
	}
	return false;
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
