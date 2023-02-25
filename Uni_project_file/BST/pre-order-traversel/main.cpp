#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node* p,*p1,*p2,*p3,*p4,o,*s;
	p=p->create_node(3);
	p1=p1->create_node(5);
	p2=p2->create_node(6);
	p3=p3->create_node(1);
	p4=p4->create_node(4);
	s=new node;
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	
//	o.pre_order(p);
//	cout<<endl;
//	o.post_order(p);
//	cout<<endl;
//	o.in_order(p);
//	cout<<endl;
//	cout<<o.isbst(p);
//	s=o.search(p,37);
	s=o.itsearch(p,43);
	if(s!=NULL){
	cout<<"The value found here is "<<s->data;
    }
    else{
    	cout<<"NO value found"<<endl;
	}
	return 0;
}
