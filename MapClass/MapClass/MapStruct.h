#pragma once
/*
Datatype for Map class.
*/

template<class K, class V>
struct MapElement
{
	K key;
	V value;
	struct MapElement* next;
};

