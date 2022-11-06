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
			std::cout << "float: +inff" <<std::endl; return;
		}
		if (literal.find("-inf") != std::string::npos)
		{
			std::cout << "float: -inff" <<std::endl; return;
		}
		if (literal.find("inf") != std::string::npos)
		{
			std::cout << "float: inff" <<std::endl; return;
		}
	}
	float f = static_cast<float>(std::atof(literal.c_str()));

	std::cout << "float: " << f; 
	if (floor(static_cast<double>(f)) == ceil(static_cast<double>(f)))
		std::cout << ".0";/*for case: a./out 2.0 ; or a.out 11*/
	std::cout << "f" << std::endl;
}
