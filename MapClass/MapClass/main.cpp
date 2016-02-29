#include <iostream>
#include <cstdlib>

#include "Map.h"
#include "MapStruct.h"

int main()
{

	Map<char *, int> * myMap = new Map<char *, int>();

	myMap->Add("kalle", 12);
	myMap->Add("Erik", 11);
	myMap->Add("kalle", 12);
	myMap->Add("Erik", 11);

	std::cout << myMap->Count() << std::endl;

	return 0;
}