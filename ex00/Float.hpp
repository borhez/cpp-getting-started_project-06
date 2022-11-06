#ifndef FLOAT_HPP
# define FLOAT_HPP

# include <string>
# include <cmath>
# include "Converter.hpp"
# include <limits>

class	Float : public Converter
{
	private:

	public:
		Float();
		Float(std::string& literal);
		~Float();
		Float(const Float& ref);
		Float&	operator=(const Float& ref);
		virtual bool	isOverFlow(char *argv1);
		virtual void	convertToActual(const std::string& literal);
};

#endif
