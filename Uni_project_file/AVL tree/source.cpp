#include<iostream>
#include"head.h"
using namespace::std;
node* node::createnode(int val){
	node* ptr=new node;
	ptr->key=val;
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->height=1;
	return ptr;
}
node* node::preorder(node* root){
	if(root!=NULL){
		preorder(root->left);
		preorder(root->right);
		cout<<root->key<<endl;
	}
}
int node::getheight(node* root){
	if(root==NULL){
		return 0;
	}
	cout<<root->height;
	return (root->height);
	
}
int node::getbalance(node* root){
	if(root==NULL){
		return 0;
	}
	return getheight(root->left) - getheight(root->right);
}

