#include<iostream>
#include"head.h"
using namespace::std;
node* node::create_node(int val){
	node* ptr=new node;
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}
node* node::traversal(node* head){
	if(head!=NULL){
		traversal(head->left);
		cout<<head->data<<endl;
		traversal(head->right);
	}
}
