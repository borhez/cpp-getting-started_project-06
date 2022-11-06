#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include <string>
# include <cmath>
# include "Converter.hpp"
# include <limits>

class	Double : public Converter
{
	private:

	public:
		Double();
		Double(std::string& literal);
		~Double();
		Double(const Double& ref);
		Double&	operator=(const Double& ref);
		virtual bool	isOverFlow(char *argv1);
		virtual void	convertToActual(const std::string& literal);
};

#endif
