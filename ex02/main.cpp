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

int main()
{
    return 0;
}