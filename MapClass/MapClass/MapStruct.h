#pragma once
/*
Datatype for Map class.
*/

template<class K, class V>
class Dict
{
public:
	K key;
	V value;
	Dict * next;
};
