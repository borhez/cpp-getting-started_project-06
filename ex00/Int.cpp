#include "Int.hpp"
#include <cmath>

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

	if (isnan(num) || isinf(num))
	{
		std::cout << "int: Impossible" << std::endl; return true;
	}
	if (num < std::numeric_limits<int>::min() ||  num > std::numeric_limits<int>::max())
	{
		std::cout<<"int: Can't convert. Overflow."<<std::endl;
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
	
	long double d = std::strtold(literal.c_str(), NULL);

	if (!isnan(d) && !isinf(d))
	{
		int	i = static_cast<int>(d);
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: Impossible" << std::endl;
}
