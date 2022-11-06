#include "Data.hpp"
#include <iostream>

int main()
{
	Data		someData;
	someData.value = 123.45;
	std::cout << "Data_value: " << someData.value << std::endl;
	std::cout << "\x1B[31mData address is: \033[0m" << &someData << std::endl;

	uintptr_t raw = serialize(&someData);
	std::cout << "After serialization: " << raw << std::endl;

	Data *deserializedPtr = deserialize(raw);
	std::cout << "\x1B[31mAfter deserialization: \033[0m" << deserializedPtr << std::endl;

	std::cout << "Data_value: " << someData.value << std::endl;
	return 0;
}
