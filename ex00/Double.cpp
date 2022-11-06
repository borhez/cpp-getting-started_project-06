#include "Double.hpp"
#include <cmath>

Double::Double()
{

}

Double::Double(std::string& literal)
	:Converter(literal)
{
}

Double::~Double()
{

}

Double::Double(const Double& ref)
	:Converter(ref)
{

}

Double&	Double::operator=(const Double& ref)
{
	Converter::operator=(ref);
	return (*this);
}

bool Double::isOverFlow(char *argv1)
{
	long double num = std::strtold(argv1, NULL);

	if (isinf(num))
	{
		if (argv1[0] == '+')
			std::cout<<"double: +inf"<<std::endl;
		else if (argv1[0] =='-')
			std::cout<<"double: -inf"<<std::endl;
		else std::cout<< "double: inf"<<std::endl;

		return true;
	}
	if (num < -(std::numeric_limits<double>::max()) ||  num > std::numeric_limits<double>::max())
	{
		std::cout<<"double: Can't convert. Overflow."<<std::endl;
		return true;
	}
	return false;
}

void	Double::convertToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "double: "<< static_cast<double>(this->getCharValue()) << ".0" << std::endl;
		return ;
	}

	long double d = std::strtold(literal.c_str(), NULL);
	if (isnan(d))
		{ std::cout << "double: " << d << std::endl; return; }

	std::cout << "double: " << d; 
	if (floor(d) == ceil(d))
		std::cout << ".0";
	std::cout << std::endl;
}
