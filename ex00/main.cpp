#include "Converter.hpp"
#include "Char.hpp"
#include "Double.hpp"
#include "Float.hpp"
#include "Int.hpp"

#include <iomanip>

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

	charConverter.convertToActual(str);
	intConverter.convertToActual(str);
	floatConverter.convertToActual(str);
	doubleConverter.convertToActual(str);
	return (0);
}
