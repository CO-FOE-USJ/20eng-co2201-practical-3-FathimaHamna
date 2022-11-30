// IndexNum:20/ENG051
// Name: Hamna M.F.F

#include <iostream>
#include "DoublyLinkedList.h"
#include "Node.h"

using namespace std;

int main()
{   int  count;
	int	Operations = 0;
	int	choice = 0;
	int a = 0;
	int b;


	DoublyLinkedList elm1{};
	
	cin >> count;

	
	for (int i = 0; i < count;i++)
	{

		cin >> b;
		elm1.insertEnd(b);
	}


	
	cin >> Operations;


	/*cout << "\n\n             OPERATIONS   " << endl;
	cout << "1 : Insert Begning" << endl;
	cout << "2 : Insert End" << endl;
	cout << "3 : Delete Beginning" << endl;
	cout << "4 : Delete End" << endl;
	cout << "5 : Delete value" << endl;
	cout << "6 : Print" << endl;
	cout << "7 : Search" << endl;
	cout << "8 : Sum" << endl;
	cout << "0 : Exit" << endl; */

	while (a < Operations)
	{

		//cout << "\n\nEnter the operation number :";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int num = 0;
			//cout << "\nEnter the number for insert : ";
			cin >> num;
			elm1.insertBeg(num);
			cout << "\nResult : ";
			elm1.print();
			break;
		}
		case 2:
		{
			int num = 0;
			//cout << "\nEnter the number for insert : ";
			cin >> num;
			elm1.insertEnd(num);
			//cout << "\nResult : ";
			elm1.print();
			break;
		}
		case 3:
		{

			elm1.deleteBeg();
			//cout << "\nResult : ";
			elm1.print();
			break;
		}
		case 4:
		{
			elm1.deleteEnd();
			//cout << "\nResult : ";
			elm1.print();
			break;
		}
		case 5:
		{
			int num = 0;
			//cout << "\nEnter number for delete : ";
			cin >> num;
			elm1.Delete(num);
			//cout << "\nResult : ";
			elm1.print();
			break;
		}

		case 6:
		{
			cout << endl;
			elm1.print();
			break;
		}
		case 7:
		{
			int n = 0;
			//cout << "\nEnter the number you want to Search : ";
			cin >> n;
			Node* Ptr = elm1.search(n);
			if (Ptr->prev == NULL)
			{
				//cout << "Previous value : NULL " << endl;
				cout <<  Ptr->next->value << endl;
			}
			else if (Ptr->next == NULL)
			{
				cout << Ptr->prev->value << endl;
				//cout << "Next value : NULL " << endl;
			}
			else
			{ 
				cout <<  Ptr->prev->value << endl;
				cout << Ptr->next->value << endl;
			}
			break;
		}

		case 8:
		{
			int sum = elm1.sum();
			cout << "SUM = " << sum;
			break;
		}
		default:
		{
			//cout << "\nError : Invalid operation number!";
			break;
		}

		}
		a++;
	}
  
}
