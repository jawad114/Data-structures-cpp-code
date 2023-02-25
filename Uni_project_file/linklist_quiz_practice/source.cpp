#include<iostream>
#include"head.h"
using namespace::std;
void linklist::traverse(linklist *head){
	linklist *ptr;
	ptr=head;
	while(ptr!=0){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<endl;
}
linklist * linklist::insertion(linklist *head, int data){
	linklist *ptr=new linklist;
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
linklist *linklist::endinsert(linklist *head, int data){
	linklist *ptr=new linklist;
	ptr->data=data;
	linklist *p= head;
	while(p->next!=0){ 
		p=p->next;
	}
	p->next=ptr;
	ptr->next=0;
	return ptr;
}
linklist *linklist::indexinsert(linklist *head, int data, int index){
	linklist *p=head;
	linklist *ptr=new linklist;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
	
}
linklist *linklist::insertatnode(linklist *head, linklist *prevnode, int data){
	linklist *ptr=new linklist;
	ptr->data=data;
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}
linklist *linklist::deletion(linklist* head){
	linklist *ptr=head;
	head=head->next;
	while(head==0){
	cout<<"The list is empty"<<endl;
	head++;
	}
	return head;
}
linklist *linklist::indexdeletion(linklist *head, int index){
	linklist *p= head;
	linklist *q=head->next;
	for(int i=0; i<index-1; i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	return head;
}
linklist *linklist::valuedeletion(linklist *head, int value){
	linklist *p= head;
	linklist *q=head->next;
	while(q->data!=value && q->next!=0){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
	p->next=q->next;
}
	return head;
}
