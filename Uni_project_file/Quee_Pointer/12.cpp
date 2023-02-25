#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *link;
};
class Queue
{
	private:
	Node *frnt, *rear, *temp;
	public:
		Queue()
		{
			frnt = rear =NULL;
		}
		enqueue (int n)
		{
			if (rear == NULL)
			{
				rear=new Node;
				rear->data = n;
				rear->link =NULL;
				frnt = rear;
			}
			else
			{
				temp=new Node;
				temp->data =n;
				temp->link = NULL;
				rear->link = temp;
				rear =rear -> link;
			}
		}
		int dequeue()
		{
			int value;
			if (frnt == NULL)
			{
				cout<<"Queue is Underflow\n";
				return 0;
			}
			else
			{
				temp = frnt;
				value =frnt->data;
				frnt = frnt ->link;
				if (frnt ==NULL)
				{
					rear = NULL;
				}
				return value;
			}
		}
		print()
		{
			if (frnt == NULL)
			{
				cout<<"Queue is emty\n";
			}
			else
			{
				temp = frnt;
				while (temp !=NULL)
				{
					cout<<temp-> data<<" ";
					temp = temp->link;
				}
				cout<<"\n";
			}
		}
};
int main()
{
	Queue obj;
	int option, value;
	while (option !=3)
	{
		cout<<"1: Insert Item\n";
		cout<<"2: Delete Item\n";
		cout<<"3: Exit\n";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter value to insert\n";
				cin>>value;
				obj.enqueue(value);
				cout<<"Queue after insertion\n";
				obj.print();
				break;
				case 2:
				cout<<"\nValue "<<obj.dequeue()<<" is deleted\n";
				cout<<"Queue after deletion\n";
				obj .print();
		}
		
	}
	return 0;
}
