#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p,*p1,*p2,*p3,*p4,*p5,*l,o;
	int m;
	p=p->create_node(32);
	p1=p1->create_node(23);
	p2=p2->create_node(67);
	p3=p3->create_node(76);
	p4=p4->create_node(56);
	p5=p5->create_node(243);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p3->left=p5;
//	p=p->right_rotate(p);
//	p=p->left_rotate(p);
//	o.traversal(p);
	l=l->min_value_node(p);
//	m=o.getheight(p3);
//	m=o.getbalance(p3);
	cout<<l<<endl;
	
	
	return 0;
}
