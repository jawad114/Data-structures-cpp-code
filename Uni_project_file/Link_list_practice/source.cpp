#include<iostream>
#include"head.h"
using namespace::std;
void linklist::traverse(linklist *head){
	while(head!='\0'){
	cout<<"The data entered is: "<<head->data<<endl;
//	cout<<"The address here is: "<<head->node<<endl;
	head=head->node;
}
}

