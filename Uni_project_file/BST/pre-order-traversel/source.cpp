#include<iostream>
#include"head.h"
using namespace::std;
node* node::create_node(int data){
	node* ptr=new node;
	ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}
node* node::pre_order(node* root){
	if(root!=NULL){
		cout<<root->data<<endl;
		pre_order(root->left);
		pre_order(root->right);

	}
}
node* node::post_order(node* root){
	if(root!=NULL){
		post_order(root->left);
		post_order(root->right);
		cout<<root->data<<endl;
	}
}
node* node::in_order(node* root){
	if(root!=NULL){
		in_order(root->left);
		cout<<root->data<<endl;
		in_order(root->right);
	}
}
int node::isbst(node* root){
	static	node* prev=NULL;
	if(root!=NULL){
		if(!isbst(root->left)){
		
			return 0;
		}
		if(prev!=NULL && root->data<=prev->data){
			
				return 0;
			
		}
		prev=root;
		return isbst(root->right);
	}
	else{
	
	   return 1;
	}
}
node* node::search(node *root, int data){
	if(root==NULL){
		return NULL;
	}
    if(data==root->data){
		return root;
	}
	else if(data<root->data){
		return search(root->left,data);
	}
	else{
		return search(root->right, data);
	}
}
node* node::itsearch(node* root, int data){
	while(root!=NULL){
		if(data==root->data){
			return root;
		}
		else if(root->data<data){
			root=root->left;
		}
		else{
			root=root->right;
		}
		return NULL;
	}
}
