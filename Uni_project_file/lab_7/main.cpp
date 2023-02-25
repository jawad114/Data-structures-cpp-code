#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* head,s,*second;
	head=new node;
	second= new node;
	head->data=54;
	head->next=second;
	second->data=343;
	second->next=0;
	s.print(head);
	head=s.insertion(head,23);
	s.print(head);
	s.papulate(7);
	return 0;
}
