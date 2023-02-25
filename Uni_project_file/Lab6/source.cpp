#include<iostream>
#include"head.h"
using namespace::std;
void dlist::traversal(dlist *head){
	dlist *ptr=head;
	dlist *p=head;
	dlist *k=head->prevnode;
	while(ptr!='\0'|| k!='\0'){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
		cout<<ptr->next<<endl;
		*k++;
		cout<<k<<endl;
	}
	
}
