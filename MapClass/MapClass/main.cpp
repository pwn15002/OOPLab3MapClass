#include <iostream>
#include <cstdlib>

#include "Map.h"
#include "MapStruct.h"

int main()
{

	Map * myMap = new Map();

	myMap->Add("kalle", 12);
	myMap->Add(14, 12);
	myMap->Add(22, "Sven");
	myMap->Add(4.f, 22);
	myMap->Add("Erik", 11);

	std::cout << myMap->Count() << std::endl;

	return 0;
}