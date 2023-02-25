#include<iostream>
#include"head.h"
#include<cstdlib>
using namespace::std;
void node::print(node *head){
	node *ptr=head;
	while(ptr!= NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<endl;
}
node * node::insertion(node *head, int data){
	node *ptr=new node;
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
node* node::sorting(node* head){
	int temp,swp;
	node* ptr=head;
	do{
	 swp=0;
	while(ptr->next!=NULL){
		if(ptr->data>ptr->next->data){
			temp=ptr->data;
			ptr->data=ptr->next->data;
			ptr->next->data=temp;
			swp=1;
		}
	}
	}while(swp);
	
}
void node::papulate(int a){
	for(int i=0; i<a; i++){
		int num;
		num=rand() % 7;
		cout<<num<<endl;
	}
}
