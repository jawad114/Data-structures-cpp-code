#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p,*p1,*p2,*p3,*p4,o;
	p=p->create_node(34);
//	o.insertion(p,90);
	p=o.insertion(p,3);
	o.in_order_traversal(p);
	return 0;
}
