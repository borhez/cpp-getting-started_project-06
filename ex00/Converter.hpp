#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <cstdlib>
# include <iostream>

class	Converter
{
	private:
		std::string	literal;
		int			type;
		char		charValue;
		

	public:
		Converter();
		Converter(std::string& literal);
		virtual ~Converter();
		Converter(const Converter& ref);
		Converter&	operator=(const Converter& ref);

		void	setType(const std::string& literal);
		int		getType(void) const;
		char	getCharValue(void) const;
		void	printCharValue(void) const;
		bool	isPossibleNumber(const std::string& literal) const;
		bool	isArgumentValid(const std::string& literal) const;
		
		virtual void	converToActual(const std::string& literal) = 0;
};

enum	Type
{
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
};
#endif
