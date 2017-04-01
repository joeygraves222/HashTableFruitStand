#include "HashItem.h"

using namespace std;



HashItem::HashItem(int key, string description)
{
	Key = key;
	Description = description;
}
HashItem::HashItem()
{
	Key = -1;
	Description = "";
}


HashItem::~HashItem()
{
}
