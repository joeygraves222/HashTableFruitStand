#pragma once
#include <string>
#include "HashItem.h"
using namespace std;

class HashTable
{
public:
	HashTable();
	~HashTable();
	int Hash(int key);
	bool Insert(int key, HashItem data);
	HashItem Find(int key);
	bool Delete(int key);
	void Rehash();
	void PrintTable();
	int TableSize;
	HashItem* Table;
};

