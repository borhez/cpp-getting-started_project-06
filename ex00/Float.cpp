#include "Float.hpp"

Float::Float()
{

}

Float::Float(std::string& literal)
	:Converter(literal)
{
}

Float::~Float()
{

}

Float::Float(const Float& ref)
	:Converter(ref)
{

}

Float&	Float::operator=(const Float& ref)
{
	Converter::operator=(ref);
	return (*this);
}

void	Float::converToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "float: "<< static_cast<float>(this->getCharValue()) << ".0f" << std::endl;
		return ;
	}

	float f = static_cast<float>(std::atof(literal.c_str()));
	std::cout << "float: " << f; 
	if (this->getType() == INT && isPossibleNumber(literal))
		std::cout << ".0";
	else if (floor(static_cast<double>(f)) == ceil(static_cast<double>(f)))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}
