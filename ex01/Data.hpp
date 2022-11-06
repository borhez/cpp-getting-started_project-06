#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>

typedef struct s_Data
{
	double		value;
}Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif