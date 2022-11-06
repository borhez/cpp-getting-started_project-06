#include "Char.hpp"

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

void	Char::converToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "char: " << literal << std::endl;
		return ;
	}
	if (!isPossibleNumber(literal))
	{
		std::cout << "char: Impossible" << std::endl;
		return ;
	}
	char	c = static_cast<char>(std::atoi(literal.c_str()));
	if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}
