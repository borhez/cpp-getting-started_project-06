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
		return false;
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

	if (!isPossibleNumber(literal))
	{
		if (literal.find("nan") != std::string::npos)
		{
			std::cout << "double: nan" <<std::endl; return;
		}
		if (literal.find("+inf") != std::string::npos)
		{
			std::cout << "double: +inf" <<std::endl; return;
		}
		if (literal.find("-inf") != std::string::npos)
		{
			std::cout << "double: -inf" <<std::endl; return;
		}
		if (literal.find("inf") != std::string::npos)
		{
			std::cout << "double: inf" <<std::endl; return;
		}
	}

	double d = static_cast<double>(std::atof(literal.c_str()));
	std::cout << "double: " << d; 
	if (floor(d) == ceil(d))
		std::cout << ".0";
	std::cout << std::endl;
}
