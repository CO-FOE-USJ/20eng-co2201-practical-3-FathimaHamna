// IndexNum:
// Name: 

#include <iostream>
#include "Node.h"

using namespace std;

class BinarySearchTree{
private:  
  Node* root;
public:
  void insertNode(int v);	//Insert a new node
  void deleteNode(int v);		    //Delete a node
  void preOder();
  void inOrder();
  void postOder();
  Node* search(int v);
  int countNodes();
  int height();
  int smallest();
  int largest();
  bool deleteTree();
  void printTree();
};
