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

void	Float::convertToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "float: "<< static_cast<float>(this->getCharValue()) << ".0f" << std::endl;
		return ;
	}

	if (!isPossibleNumber(literal))
	{
		if (literal.find("nan") != std::string::npos)
		{
			std::cout << "float: nanf" <<std::endl; return;
		}
		if (literal.find("+inf") != std::string::npos)
		{
			std::cout << "float: +inf" <<std::endl; return;
		}
		if (literal.find("-inf") != std::string::npos)
		{
			std::cout << "float: -inf" <<std::endl; return;
		}
		if (literal.find("inf") != std::string::npos)
		{
			std::cout << "float: inf" <<std::endl; return;
		}
	}
	float f = static_cast<float>(std::atof(literal.c_str()));

	std::cout << "float: " << f; 
	if (this->getType() == INT && isPossibleNumber(literal))
		std::cout << ".0";
	else if (floor(static_cast<double>(f)) == ceil(static_cast<double>(f)))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}
