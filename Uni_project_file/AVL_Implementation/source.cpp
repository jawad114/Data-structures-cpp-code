#include<iostream>
#include"head.h"
using namespace::std;
int node::max(int a, int b){
	return (a>b)?a:b;
}
node* node::traversal(node* root){
	if(root!=NULL){
		traversal(root->left);
		cout<<root->data<<endl;
		traversal(root->right);
	}
}
node* node::create_node(int val){
	node* ptr=new node;
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->height=1;
	
	return ptr;	
}
int node::getheight(node* root){
	if(root==NULL){
		return -1;
	}
	else{
		int l=getheight(root->left);
		int r=getheight(root->right);
		
		if(l>r){
			return(l+1);
	}
			else{
			return(r+1);
		}
	}
	
}
int node::getbalance(node* root){
	if(root==NULL){
		return 0;
	}
	return getheight(root->left)- getheight(root->right);
}
node* node::right_rotate(node* y){
	node* x=y->left;
	node* T2=x->right;
	
	x->right=y;
	y->left=T2;
	
	y->height = max(getheight(y->left),getheight(y->right)) + 1;
    x->height = max(getheight(x->left),getheight(x->right)) + 1;
 	
 	return x;
 	
}
node* node::left_rotate(node* x){
	node* y=x->right;
	node* T2=y->left;
	
	y->left=x;
	x->right=T2;
	
	y->height = max(getheight(y->left),getheight(y->right)) + 1;
    x->height = max(getheight(x->left),getheight(x->right)) + 1;
 	
 	return y;
}
node* node::min_value_node(node* root){
	node* ptr=root;
	while(ptr->left!=NULL){
		ptr=ptr->left;
	}
		
	return ptr;
}
node* node::insert(node* root, int val){
	if(root==NULL){
		return 0;
	}
	else if(val<root->data){
		node->left=insert(node->left,val);
	}
	else if(val>root->data){
		node->right=insert(node->right,val);
	}
	else{
		cout<<"The same value can't be inserted"<<endl;
		return root;
	}
	   node->height = 1 + max(getheight(root->left),getheight(root->right));
	   int b=getbalance(root);
	   
	   if(b>1 && data<root->left->data){
	   	return right_rotate(root);
	   }
	   else if(b<-1 && data>root->right->data){
	   	return left_rotate(root);
	   }
	    else if (b > 1 && data > root->left->data)
    	{
        root->left = left_rotate(root->left);
        return right_rotate(root);
}
  if (b < -1 && data < node->right->data)
    {
        root->right = right_rotate(root->right);
        return left_rotate(root);
    }
 
    /* return the (unchanged) node pointer */
    return root;
}
