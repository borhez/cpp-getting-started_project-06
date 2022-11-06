#include "Converter.hpp"

bool	Converter::isPossibleNumber(const std::string& literal) const
{
	if (literal.find("nan") != std::string::npos || literal.find("inf") != std::string::npos)
		return (false);
	return (true);
}

void	Converter::setType(const std::string& literal)
{
	if (literal.find('.') != std::string::npos && literal.find('f') != std::string::npos)
	{	
		this->type = FLOAT;
		return ;
	}
	if (literal.find('.') != std::string::npos)
	{	
		this->type = DOUBLE;
		return ;
	}
	if (literal.size() == 1 && !isdigit(static_cast<char>(literal.c_str()[0])))
	{	
		this->type = CHAR;
		this->charValue = static_cast<char>(literal.c_str()[0]);
		return ;
	}
	else
		this->type = INT;
}

int	Converter::getType(void) const
{
	return (this->type);
}

char	Converter::getCharValue(void) const
{
	return (this->charValue);
}

Converter::Converter()
{

}

Converter::Converter(std::string& literal)
	:literal(literal)
{
}

Converter::~Converter()
{
}

Converter::Converter(const Converter& ref)
	:literal(ref.literal)
{
}

Converter&	Converter::operator=(const Converter& ref)
{
	if (this != &ref)
	{
		this->literal = ref.literal;
	}
	return (*this);
}
