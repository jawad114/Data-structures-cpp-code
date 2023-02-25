#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p, *p1,*p2,*p3,*p4,o;
	 p=p->create_node(4);
	p1=p1->create_node(2);
	 p2=p2->create_node(5);
	 p3=p3->create_node(1);
	 p4=p4->create_node(3);
	 p->left=p1;
	 p->right=p2;
	 p1->left=p3;
	 p1->right=p4;
	o.traversal(p);
	return 0;
}
