#include "Converter.hpp"
#include "Char.hpp"
#include "Double.hpp"
#include "Float.hpp"
#include "Int.hpp"
#include <limits>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Try: ./a.out <literal>" << std::endl;
		return (1);	
	}
	std::string str(argv[1]);

	Char	c(str);
	Double	d(str);
	Float	f(str);
	Int		i(str);

	Converter	&charConverter = c;
	Converter	&doubleConverter = d;
	Converter	&floatConverter = f;
	Converter	&intConverter = i;

	charConverter.setType(str);
	doubleConverter.setType(str);
	floatConverter.setType(str);
	intConverter.setType(str);

	if(!c.isOverFlow(argv[1]))
		charConverter.convertToActual(str);
	
	if(!i.isOverFlow(argv[1]))	
		intConverter.convertToActual(str);

	if(!f.isOverFlow(argv[1]))	
		floatConverter.convertToActual(str);

	if(!d.isOverFlow(argv[1]))	
		doubleConverter.convertToActual(str);
	return (0);
}
