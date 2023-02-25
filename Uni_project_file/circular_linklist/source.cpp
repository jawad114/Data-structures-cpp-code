#include<iostream>
#include"head.h"
using namespace::std;
void clist::traversal(clist *head){
	clist *ptr=head;
	cout<<ptr->data;
	while(ptr==head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
		
	}
	
}
