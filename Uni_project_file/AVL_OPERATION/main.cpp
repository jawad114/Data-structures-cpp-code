#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p,*p1,*p2,*p3,*p4,*p5,o;
	int i;
	p=p->create_node(4);
	p1=p1->create_node(2);
	p2=p2->create_node(5);
	p3=p3->create_node(1);
	p4=p4->create_node(3);
	p5=p5->create_node(65);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
//	i=o.get_height(p3);
	i=o.balance_factor(p);
	cout<<i<<endl;
	return 0;
}
