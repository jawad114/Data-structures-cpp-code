#include<iostream>
#include"head.h"
using namespace::std;
node* node::in_order_traversal(node* root){
	if(root!=NULL){
		in_order_traversal(root->left);
		cout<<root->data<<endl;
		in_order_traversal(root->right);
		
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
int node::balance_factor(node* root){
	if(root==NULL){
		return 0;
	return get_height(root->left)-get_height(root->right);	
	}
}
int node::get_height(node* root){
	if(root==NULL){
		return 0;
	return root->height;	
	}
}
//node* node::insertion(node* root,int key){
//		
// // if the root is null, create a new node and return it
//    if (root == NULL) {
//        return create_node(key);
//    }
// 
//    // if the given key is less than the root node, recur for the left subtree
//    if (key < root->data) {
//        root->left = insertion(root->left, key);
//    }
//    // if the given key is more than the root node, recur for the right subtree
//    else {
//        root->right = insertion(root->right, key);
//    }
// 
//    return root;
//}
node* node::insertio_iterative(node* root, int key){
	node* prev=NULL;
		while(root!=NULL){
			prev=root;
//			if(root->data==key){
//				cout<<"Value already exist"<<endl;
//				return 0;
//			}
			if(key<root->data){
				root=root->left;
			}
			else if(key>root->data){
				root=root->right;
			}
		}
		node* ptr=new node;
		ptr->data=key;
		ptr->left=NULL;
		ptr->right=NULL;
		if(key>prev->data){
			root->right=ptr;
			cout<<"inserted in right"<<endl;
		}
		else {
			root->left=ptr;
			cout<<"inserted in right"<<endl;
		}
//		return root;
}
int node::max(int a, int b){
	return a>b?a:b;
}
node* node::left_rotation(node* x){
	node* y=x->right;
	node* T2=y->left;
	
	y->left=x;
	x->right=T2;
	
	y->height=max(get_height(y->left), get_height(y->left))+1;
	x->height=max(get_height(x->left), get_height(x->left))+1;
	
	cout<<"Left Rotation occur "<<endl;
	return y;
	
}
node* node::right_rotation(node* y){
	node* x=y->left;
	node* T2=x->right;
	
	x->right=y;
	y->left=T2;
	
	y->height=max(get_height(y->left), get_height(y->right))+1;
	x->height=max(get_height(x->left), get_height(x->right))+1;
	return x;
}
node* node::insertion(node* root, int key){
	if(root==NULL){
		return create_node(key);
	}
	if(key<root->data){
		root->left=insertion(root->left,key);
	}
	else{
		root->right=insertion(root->right,key);
	}
	
	root->height=max(get_height(root->left), get_height(root->right));
	int b=balance_factor(root);
	
	if(b>1 && key<root->left->data){
		return right_rotation(root);
	}
	else if(b<-1 && key>root->right->data){
		return left_rotation(root->left);
	}
	else if(b>1 && key>root->left->data){
		root->left=left_rotation(root->left);
		return right_rotation(root);
	}
	 else if (b < -1 && key < root->right->data)
    {
        root->right = right_rotation(root->right);
        return left_rotation(root);
    }
    cout<<"inserted sucessfully"<<endl;
    return root;
}
node
