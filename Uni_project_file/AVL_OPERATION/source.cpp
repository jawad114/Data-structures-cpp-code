#include<iostream>
#include"head.h"
using namespace::std;
//int node::get_height(node* root){
//		if(root==NULL){
//			return -1;
//		}
//		else{
//			int l=get_height(root->left);
//			int r=get_height(root->right);
//			
//			
//			if(l>r){
//				return l+1;
//			}
//			else{
//				return r+1;
//			}
//			
//		}
//} 
int node::get_height(node* root){
	if(root==NULL)
		return 0;
	return root->height;
}
int node::balance_factor(node* root){
	if(root==NULL)
		return 0;
	return get_height(root->left)-get_height(root->right);
}
node* node::create_node(int val){
	node* ptr=new node;
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->height=1;
	return ptr;
}
node* node::left_rotation(node* x){
	node* y=x->right;
	node* T2=y->left;
	
	y->left=y;
	x->right=T2;
	x->height=max
}
