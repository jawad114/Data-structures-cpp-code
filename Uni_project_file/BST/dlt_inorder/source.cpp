#include<iostream>
#include"head.h"
#include<stdlib.h>
using namespace::std;
node* node::createnode(int data){
	node* ptr=new node;
		ptr->left=NULL;
		ptr->right=NULL;
		ptr->data=data;
	return ptr;
}
node* node::inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<endl;
		inorder(root->right);
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
	 if(root->right==NULL && root->left==NULL){
	 	free(root);
	 	return NULL;
	 }
	 if(data<root->data){
	 	root->left=deletion(root->left, data);
	 }
	 else if(data>root->data){
	 	root->right=deletion(root->right, data);
	 }
	 else{
	 	ipre=ipred(root);
	 	root->data=ipre->data;
	 	root->left=deletion(root->left, ipre->data);
	 }
	 return root;
}
