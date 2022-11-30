// IndexNum:
// Name: 

#include "DoublyLinkedList.h"

void DoublyLinkedList::insertBeg(int X)
{
	Node* ptr_val;
	class Node* New = new Node();
	ptr_val = start;
	New->value = X;
	New->prev = NULL;
	New->next = ptr_val;
	start->prev = New;
	start = New;
}

void DoublyLinkedList::insertEnd(int X)
{

	class Node* New = new Node();
	New->value = X;

	if (start == NULL)
	{
		start = New;
	}
	else
	{
		Node* ptr_val = start;
		for (; ptr_val->next != NULL; )
		{
			ptr_val = ptr_val->next;
		}
		ptr_val->next = New;
		New->prev = ptr_val;
	}
}


void DoublyLinkedList::print()
{
	Node* ptr_val;
	ptr_val = start;
	for (;ptr_val != NULL;)
	{
		cout << ptr_val->value << " ";
		ptr_val = ptr_val->next;
	}
	cout << endl;
}

void DoublyLinkedList::deleteBeg()
{
	Node* ptr_val = start;
	start = start->next;
	start->prev = NULL;
	delete ptr_val;
}

void DoublyLinkedList::deleteEnd()
{
	if (start == NULL)
	{
		cout << "Down" << endl;
		return;
	}
	Node* ptr_val = start;
	for (; ptr_val->next != NULL;)
	{
		ptr_val = ptr_val->next;
	}
	ptr_val->prev->next = NULL;
	delete ptr_val;
}

void DoublyLinkedList::Delete(int D)
{
	if (start == NULL)
	{
		cout << "Down" << endl;
		return;
	}
	Node* ptr_val = start;
	int c = 0;
	for (; ptr_val != NULL;)
	{
		if (ptr_val->value == D)
		{
			c++;
			break;
		}
		ptr_val = ptr_val->next;
	}
	if (c == 1)
	{
		if (ptr_val->next == NULL)
		{
			ptr_val->prev->next = NULL;
			delete ptr_val;
			return;
		}
		else if (ptr_val == start)
		{
			start = start->next;
			start->prev = NULL;
			delete ptr_val;
			return;
		}
		else
		{
			ptr_val->prev->next = ptr_val->next;
			ptr_val->next->prev = ptr_val->prev;
			delete ptr_val;
			return;
		}
	}
	else
		cout << "Error : value does not exist" << endl;
}

Node* DoublyLinkedList::search(int F)
{
	Node* ptr_val = start;
	for (; ptr_val != NULL; )
	{
		if (ptr_val->value == F)
		{
			return ptr_val;
		}
		ptr_val = ptr_val->next;
	}
	return ptr_val;
}


int DoublyLinkedList::sum()
{
	int total = 0;
	Node* ptr_val = start;
	while (ptr_val != NULL)
	{
		total = total + ptr_val->value;
		ptr_val = ptr_val->next;
	}
	return total;
}
