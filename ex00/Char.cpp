#include "Char.hpp"
#include <cmath>

Char::Char()
{

}

Char::Char(std::string& literal)
	:Converter(literal)
{
}

Char::~Char()
{

}

Char::Char(const Char& ref)
	:Converter(ref)
{

}

Char&	Char::operator=(const Char& ref)
{
	Converter::operator=(ref);
	return (*this);
}

bool Char::isOverFlow(char *argv1)
{
	long double num = std::strtold(argv1, NULL);

	if (isnan(num) || isinf(num))
	{
		std::cout << "char: Impossible" << std::endl; return true;
	}

	if (num < std::numeric_limits<char>::min() ||  num > std::numeric_limits<char>::max())
	{
		std::cout<<"char: Can't convert. Overflow."<<std::endl;
		return true;
	}
	return false;
}

void	Char::convertToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "char: " << literal << std::endl;
		return ;
	}

	char	c = static_cast<char>(std::atoi(literal.c_str()));
	if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}
