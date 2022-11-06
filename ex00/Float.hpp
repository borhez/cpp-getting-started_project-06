#ifndef FLOAT_HPP
# define FLOAT_HPP

# include <string>
# include <cmath>
# include "Converter.hpp"

class	Float : public Converter
{
	private:

	public:
		Float();
		Float(std::string& literal);
		~Float();
		Float(const Float& ref);
		Float&	operator=(const Float& ref);

		virtual void	converToActual(const std::string& literal);
};

#endif
