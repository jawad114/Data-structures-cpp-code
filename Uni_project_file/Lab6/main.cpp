#include <iostream>
#include"head.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	dlist *head,*second,*third,obj;
	head=new dlist;
	second=new dlist;
	third=new dlist;
	head->prevnode=NULL;
	head->data=99;
	head->next=second;
	second->prevnode=head;
	second->data=56;
	second->next=third;
	third->prevnode=second;
	third->data=34;
	third->next=NULL;
	obj.traversal(head);
	return 0;
}
