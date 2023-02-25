#include<iostream>
#include"head.h"
using namespace::std;
void linklist::trvaersal(linklist *val ){
	while(val!= NULL){
	cout<<"The value is:"<<val->data<<endl;
	val=val->next;
	}
}
void  linklist::insertion_start(linklist *head, int data){
	linklist *ptr;
	ptr=head;
	ptr->next=head;
	ptr->data=data;
//   ptr->insertion_start(head,55);
//	return ptr;
}
