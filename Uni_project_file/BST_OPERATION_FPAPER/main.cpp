#include <iostream>
using namespace::std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node* createnode(int val){
			node* ptr=new node;
			ptr->data=val;
			ptr->left=NULL;
			ptr->right=NULL;
			return ptr;
		}
		node* insertion(node* root, int val){
//			cout<<"Running"<<endl;
			if(root->data==val){
				cout<<"value already exist"<<endl;
				return 0;
			}
			if(val<root->data){
				cout<<"Left"<<endl;
				root->left=insertion(root->left, val);
			}
			else if(val>root->data){
				cout<<"Right"<<endl;
				root->right=insertion(root->right, val);
			}
			return root;
	}
	node* inorder_traversal(node* root){
		if(root!=NULL){
			inorder_traversal(root->left);
			cout<<root->data<<endl;
			inorder_traversal(root->right);
		}
	}
	
};
int main(int argc, char** argv) {
	node o,*h;
	h=h->createnode(334);
	h=o.insertion(h,33);
	o.inorder_traversal(h);
	return 0;
}
