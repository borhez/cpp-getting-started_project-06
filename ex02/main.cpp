#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>
#include <iostream>

Base    *generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Create class A" << std::endl;
			return ((Base *)new A);
		case 1:
			std::cout << "Create class B" << std::endl;
			return ((Base *)new B);
		default:
			std::cout << "Create class C" << std::endl;
			return ((Base *)new C);
	}
}

void	identify(Base* p)
{
    /*
        dynamic_cast:
        Нисходящее-приведение типа, от базового класса к потомку.
        Проверка корректности производится сама,
        при невозможности приведения, возвращает NULL
    */
	if (dynamic_cast<A*>(p))
			std::cout << "pointer-identify: A" << std::endl;
	else if (dynamic_cast<B*>(p))
			std::cout << "pointer-identify: B" << std::endl;
	else if (dynamic_cast<C*>(p))
			std::cout << "pointer-identify: C" << std::endl;
	else
			std::cout << "It's no class" << std::endl;
}

void	identify(Base &p)
{
	/*Error compilation: 
		// if (dynamic_cast<A&>(p))
		//	std::cout << "refference-identify: A" << std::endl;
	*/

	try
	{
		dynamic_cast<A&>(p);
		std::cout << "refference-identify: A" << std::endl;
 	}
  	catch (const std::exception&) 
	{
    	try 
		{
      	dynamic_cast<B&>(p);
      	std::cout << "refference-identify: B" << std::endl;
    	}
		catch (const std::exception&) 
		{
      		try
			{
			dynamic_cast<C&>(p);
			std::cout << "refference-identify: C" << std::endl;
			}
			catch (const std::exception&) 
			{
				std::cout << "It's no class" << std::endl;
			}
  		}
	}
}	

int main()
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	
	delete ptr;
	return 0;
}