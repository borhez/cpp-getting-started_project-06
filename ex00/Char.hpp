#ifndef CHAR_HPP
# define CHAR_HPP

# include <string>
# include "Converter.hpp"
# include <limits>

class	Char : public Converter
{
	private:

	public:
		Char();
		Char(std::string& literal);
		~Char();
		Char(const Char& ref);
		Char&	operator=(const Char& ref);

		virtual bool	isOverFlow(char *argv1);
		virtual void	convertToActual(const std::string& literal);
};

#endif
