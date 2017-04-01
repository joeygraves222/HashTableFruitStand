#pragma once
#include <string>
using namespace std;
class HashItem
{
public:
	HashItem(int key, string description);
	HashItem();
	~HashItem();
	int Key;
	string Description;

};

