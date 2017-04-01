#include "HashTable.h"



HashTable::HashTable()
{
	TableSize = 20;
	Table = new HashItem[TableSize];
}


HashTable::~HashTable()
{
	delete Table;
	Table = nullptr;
}


int HashTable::Hash(int key)
{


	return 0;
}


bool HashTable::Insert(int key, HashItem data)
{
	int Index = Hash(key);
	bool inserted = false;
	if (Table[Index].Description == "")
	{
		Table[Index] = data;
		inserted = true;
	}
	else
	{
		int newIndex = Index + 1;
		while (!inserted)
		{
			if (newIndex >= TableSize)
			{
				return false;
			}
			else
			{

				if (Table[newIndex].Description != "")
				{
					newIndex++;
				}
				else
				{
					Table[newIndex].Key = data.Key;
					Table[newIndex].Description = data.Description;
				}
			}
		}
	}
	return inserted;
}

HashItem HashTable::Find(int key)
{
	int Index = Hash(key);

	return Table[Index];
}

bool HashTable::Delete(int key)
{
	return false;
}

void HashTable::Rehash()
{
	HashItem* TempTable = new HashItem[TableSize];
	for (int i = 0; i < TableSize; i++)
	{
		TempTable[i] = Table[i];
	}
	delete Table;
	Table = nullptr;
	int TempSize = TableSize;
	TableSize *= 2;
	Table = new HashItem[TableSize];
	for (int i = 0; i < TempSize; i++)
	{
		Insert(TempTable[i].Key, TempTable[i]);
	}


}

void HashTable::PrintTable()
{

}
