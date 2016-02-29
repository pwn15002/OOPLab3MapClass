#include <iostream>
#include <cstdlib>

#include "Map.h"
#include "MapStruct.h"

int main()
{

	Map<char *, int> * myMap = new Map<char *, int>();

	myMap->Add("Hej", 12);
	myMap->Add("Hejsan", 15);

	std::cout << myMap->Count() << std::endl;

	getchar();
	return 0;
}