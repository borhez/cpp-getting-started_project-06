#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include <string>
# include <cmath>
# include "Converter.hpp"

class	Double : public Converter
{
	private:

	public:
		Double();
		Double(std::string& literal);
		~Double();
		Double(const Double& ref);
		Double&	operator=(const Double& ref);

		virtual void	converToActual(const std::string& literal);
};

#endif
