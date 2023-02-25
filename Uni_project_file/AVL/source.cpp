#include<iostream>
#include"head.h"
using namespace::std;
node* node::createnode(int val){
	node* p=new node;
	p->data=val;
	p->left=NULL;
	p->right=NULL;
	p->height=1;
	return p;
}
int node::max(int a, int b){
	return a>b?a:b;
}
node* node::getheight(node *n){
	if(n==NULL){
		return 0;
	return n->height;
	
	}
}
node* node::getbalance(node* n){
	if(n==NULL){
		return 0
	}
	return getheight(n->left)-getheight(n->right);
}
node* node::rightrotate(node* y){
	node* x=y->left;
	node* T2=x->right;
	x->right=y;
	y->left=T2;
	y->height=max((y->right), (y->left))+1;
	x->height=max((x->right), (x->left))+1;
	return x;
}
node* node::leftrotate(node* y){
	node* x=y->left;
	node* T2=x->right;
	x->right=y;
	y->left=T2;
	y->height=max((y->right), (y->left))+1;
	x->height=max((x->right), (x->left))+1;
	return y;
}
node* node::insertion(int data){
	if(root==NULL){
		return(createnode(data));
	}
	if(data<root->data){
		root->left=insertion(root->left,data);
	}
	else if(data>root->right){
		root->left=insertion(root->right,data);
	}
	return node;
	node->height=max((root->right), (root->left))+1;
	node bf=getbalance(root);
	
	if(bf>1 && data<root->left->data){
		return rightrotate(root);
	}
	else if(bf<-1 && data>root-right->data){
		return leftrotate(root);
	}
	if(bf>1 && data<root->left->data){
		root->left=leftrotate(root->left);
		return rightrotate(root);
	}
	else if(bf<-1 && data>root-right->data){
		root->right=rightrotate(root->right);
		return leftrotate(root);
	}
	return node;
}
