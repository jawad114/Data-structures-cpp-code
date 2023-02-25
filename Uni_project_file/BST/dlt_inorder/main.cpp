#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {

	node* p,*p1,*p2,*p3,*p4,o;
	 p=p->createnode(24);
	p1=p1->createnode(21);
	 p2=p2->createnode(26);
	 p3=p3->createnode(20);
	 p4=p4->createnode(23);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	o.inorder(p);
	p=o.deletion(p,24);
	cout<<endl;
	o.inorder(p);
	return 0;
}
