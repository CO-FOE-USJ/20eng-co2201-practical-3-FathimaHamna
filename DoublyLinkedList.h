#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class DoublyLinkedList{
public:  
  Node* start;
public:
  void insertBeg(int X);	//Insert a new node at the beginning
  void insertEnd(int X);		//Insert a node at the end
  void deleteBeg();		//Delete a node from the beginning 
  void deleteEnd();		//Delete a node from the end 
  void Delete(int D);		//Delete a node with a given value 
  void print(); 			//Print current list
  Node* search(int F);	//Search an existing element 
  int sum();			//Add list values to get sum
};
