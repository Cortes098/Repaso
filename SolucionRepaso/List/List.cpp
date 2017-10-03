// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"

List::List()
{
	first = nullptr, last = first;
}

void List::push_front(int value)
{
	if(size==0)
	{
		node* buffer =new node {value,first, nullptr };
		first = buffer;
		last = first;
	}
	else 
	{
		node* buffer = new node{value, first, nullptr };
	}
}

List::~List()
{
}

int main()
{
    return 0;
}



