#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p, *p1,*p2,*p3,*p4,o,*n;
	p=new node;
	p1=new node;
	p2-new node;
	p3=new node;
	p4=new node;
	p=p->creat_node(12);
	p1=p1->creat_node(9);
	p2=p2->creat_node(8);
	p3=p3->creat_node(7);
	p4=p4->creat_node(6);
	p->left=p2;
	p->right=p1;
	p1->left=p4;
	p1->right=p3;
	o.pre_order_traversal(p);
	cout<<endl;
//	n=o.it_search(p,12);
	n=o.search_node(p,12);
	if(n!=NULL){
		cout<<"Value found here "<<n->data<<endl;
	}
	else{
		cout<<"Value not found sorry"<<endl;
	}
	o.insertion(p,4);
//	o.pre_order_traversal(p);
	cout<<endl;
	cout<<p->right->left->data;
	return 0;
}
