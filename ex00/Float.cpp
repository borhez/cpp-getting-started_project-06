#include "Float.hpp"
#include <cmath>
#include <sstream>

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

bool Float::isOverFlow(char *argv1)
{
	long double num = std::strtold(argv1, NULL);

	if (isinf(num))
	{
		if (argv1[0] == '+')
			std::cout<<"float: +inff"<<std::endl;
		else if (argv1[0] =='-')
			std::cout<<"float: -inff"<<std::endl;
		else std::cout<< "float: inff"<<std::endl;

		return true;
	}

	if (num < -(std::numeric_limits<float>::max()) ||  num > std::numeric_limits<float>::max())
	{
		std::cout<<"float: Can't convert. Overflow."<<std::endl;
		return true;
	}
	return false;
}

void	Float::convertToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "float: "<< static_cast<float>(this->getCharValue()) << ".0f" << std::endl;
		return ;
	}

	long double f = std::strtold(literal.c_str(), NULL);
	if (isnan(f))
		{ std::cout << "float: " << f << 'f' << std::endl; return; }
	std::cout << "float: " << f;

// if <f> without point:
	std::ostringstream strs;
	strs << f;
	std::string str = strs.str();
	if (str.find('.') == std::string::npos)
		std::cout << ".0";

	std::cout << "f" << std::endl;
}
