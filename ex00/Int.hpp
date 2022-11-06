#ifndef INT_HPP
# define INT_HPP

# include <string>
# include "Converter.hpp"

class	Int : public Converter
{
	private:

	public:
		Int();
		Int(std::string& literal);
		~Int();
		Int(const Int& ref);
		Int&	operator=(const Int& ref);

		virtual void	convertToActual(const std::string& literal);
};

#endif
