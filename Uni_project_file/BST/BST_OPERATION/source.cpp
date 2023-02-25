#include<iostream>
#include"head.h"
using namespace::std;
node* node::pre_order_traversal(node* root){
	if(root!=NULL){
		cout<<root->data<<endl;
		pre_order_traversal(root->left);
		pre_order_traversal(root->right);
	}
}
node* node::creat_node(int data){
	node* ptr=new node;
	ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}
node* node::search_node(node* root, int data){
		if(root!=NULL){
			if(root->data==data){
				return root;
			}
			else if(root->data<=data){
				return search_node(root->left,data);
			}
			else{
				return search_node(root->right,data);
			}
		}
}
node* node::it_search(node* root, int data){

	while(root!=NULL){
		if(root->data==data){
			return root;
		}
		else if(root->data<=data){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
}
node* node::insertion(node* root, int data){
		node* prev=new node;
	while(root!=NULL){
		prev=root;
		if(root->data==data){
			cout<<"Cannot insert";
			return 0;
		}
		else if(data<root->data){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	node* ptr=ptr->creat_node(data);
	if(data<prev->data){
		prev->left=ptr;
	}
	else{
	prev->right=ptr;
}
}
