#include<iostream>
#include"head.h"
#include<stdlib.h>
using namespace::std;
node* node::create_node( int data){
	node* ptr=new node;
	ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}
node* node::inorder_traversal(node* root){
	if(root!=NULL){
		inorder_traversal(root->left);
		cout<<root->data<<endl;
		inorder_traversal(root->right);
	}
}
node* node::preorder_traversal(node* root){
	if(root!=NULL){
		cout<<root->data<<endl;
		preorder_traversal(root->left);
		preorder_traversal(root->right);
	}
}
node* node::ipred(node* root){
	root=root->left;
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}
node* node::deletion(node* root, int data){
		node* ipre=new node;
		if(root==NULL){
			return NULL;
		}
		if(root->left==NULL && root->right==NULL){
			free(root);
			return NULL;
		}
		else if(data<root->data){
			root->left=deletion(root->left, data);
		}
		else if(data>root->data){
			root->right=deletion(root->right,data);
		}
		else{
			ipre=ipred(root);
			root->data=ipre->data;
			root->left=deletion(root->left, ipre->data);
		}
		return root;
}
