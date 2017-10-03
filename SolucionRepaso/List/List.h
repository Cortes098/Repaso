#pragma once
class List
{
private:
	struct node
	{
		int num;
		node* next, *previous;
	};
	node* last, *first;
	int size;
public:
	void push_front(int value);
	List();
	~List();
};

