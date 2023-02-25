#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p,*p1,*p2,*p3,*p4,*p5,o,*s;
	p=new node;
	p1=new node;
	p2=new node;
	p3=new node;
	p4=new node;
	p5=new node;
	p5=p5->create_node(11);
	p=p->create_node(1);
	p1=p1->create_node(3);
	p2=p2->create_node(9);
	p3=p3->create_node(5);
	p4=p4->create_node(8);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	o.inorder_traversal(p);
    o.preorder_traversal(p);
	p=o.deletion(p,8);
	cout<<endl;
	o.inorder_traversal(p);
	o.preorder_traversal(p);
	
	return 0;
}
