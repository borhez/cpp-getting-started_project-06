#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./converter <literal>" << std::endl;
		return (1);	
	}
	std::string str(argv[1]);

	Char	c(str);
	Double	d(str);
	Float	f(str);
	Int		i(str);
	
	return 0;
}
