#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	linklist *head,*second,*third,s;
	head=new linklist;
	second=new linklist;
	third=new linklist;
	head->data=98;
	head->next=second;
	second->data=76;
	second->next=third;
	third->data=34;
	third->next=NULL;
	s.traverse(head);
	return 0;
}
