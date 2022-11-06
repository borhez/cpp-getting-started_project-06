#ifndef CHAR_HPP
# define CHAR_HPP

# include <string>
# include "Converter.hpp"

class	Char : public Converter
{
	private:

	public:
		Char();
		Char(std::string& literal);
		~Char();
		Char(const Char& ref);
		Char&	operator=(const Char& ref);

		virtual void	converToActual(const std::string& literal);
};

#endif
