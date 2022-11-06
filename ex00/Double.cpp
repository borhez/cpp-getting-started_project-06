#include "Double.hpp"

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

void	Double::converToActual(const std::string &literal)
{
	if (this->getType() == CHAR)
	{	
		std::cout << "double: "<< static_cast<double>(this->getCharValue()) << ".0" << std::endl;
		return ;
	}

	double d = static_cast<double>(std::atof(literal.c_str()));
	std::cout << "double: " << d; 
	if (this->getType() == INT && isPossibleNumber(literal))
		std::cout << ".0";
	else if (floor(d) == ceil(d))
		std::cout << ".0";
	std::cout << std::endl;
}
/*void	Double::printValue(void* actualValue)
{

	this->value = *(static_cast<Double*>(actualValue));
	std::cout << value << std::endl;
}*/
