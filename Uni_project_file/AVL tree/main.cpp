#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p,*p1,*p2,*p3,*p4,ob;
	p=new node;
	p1=new node;
	p2=new node;
	p3=new node;
	p4=new node;
	p=ob.createnode(2);
	p1=ob.createnode(23);
	p2=ob.createnode(32);
	p3=ob.createnode(3);
	p4=ob.createnode(23);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	ob.preorder(p);
	ob.getheight(p);
//	int k=ob.getbalance(p1);
//	cout<<k;
	
	return 0;
}
