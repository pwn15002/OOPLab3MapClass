#pragma once
/*
Map
Class imitates a C# Dictionary class.
Features:
- Store Unlimited number of keys and values
- An Add function that can be used to add a key and its value to the Map.
- A Remove function which given the key removes the key and its value
- A Count function that returns the number of elements in the Map.
- A Clear function the makes the Map empty.
- Two Boolean functions HasKey and HasValue which return true if the given key or value is present.
- A ToArray function that converts the contents of the Map values (only values) into an array.
- Overloaded [] operator (subscript operator) that allows us to access a value using the key as index.
Please note that the subscript operator should be overloaded in a way that allows statement like map Object[“key String”]=value; in such cases if the key does not exist an exception must be thrown.
- Overloaded << operator to print the whole map in the following form: 
{ [key1, 1233] , [key2, 32423], [key3, 2343] }
You will have to do this through a friend function. There is a special syntax for friends of templates.
You can read more about it here: http://www.cplusplus.com/forum/general/45776/
- An overloaded = operator (assignment operator) that performs a deep copy.
*/

#include "MapStruct.h"

class Map
{
private:
	int numOfElements;
	Dict<int, int> * head;
public:
	template <class K> void Remove(const K key);
	int Count();
	void Clear();
	bool HasKey();
	bool HasValue();
	template <class K, class V> V * ToArray();
	template <class K, class V> V & operator[] (const K key);
	Map();
	~Map();
	template<class K, class V> void Add(const K key, const V value);
};

Map::Map()
{
	numOfElements = 0;
}

Map::~Map()
{

}

template<class K, class V>
void Map::Add(const K key, const V value)
{
	Dict<K, V> * tmp = new Dict<K, V>;
	
	tmp->key = key;
	tmp->value = value;
	numOfElements++;

	if (numOfElements == 0)
		tmp->next = nullptr;
	else
		tmp->next = head;
	head = tmp;
}

int Map::Count()
{
	return numOfElements;
}