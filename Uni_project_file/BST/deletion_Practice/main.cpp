#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p, *p1, *p2,*p3,*p4,o;
	 p=new node;
	 p1=new node;
	 p2=new node;
	p3=new node;
	 p4=new node;
	p1=p1->create_node(3);
	p=p->create_node(5);
	p2=p2->create_node(6);
	p3=p3->create_node(1);
	p4=p4->create_node(4);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	o.inorder_traversal(p);
	p=o.deltion(p,6);
	cout<<endl;
	o.inorder_traversal(p);
	return 0;
}
