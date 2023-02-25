#include <iostream>
#include"header.h"
using namespace::std;

int main(int argc, char** argv) {
	stack* obj=new stack();
	cout<<" The stack element are:"<<endl;
	cout<<obj->push(10)<<endl;
	cout<<obj->push(12)<<endl;
	cout<<obj->push(14)<<endl;
	cout<<obj->push(16)<<endl;
	cout<<obj->push(18)<<endl;
	cout<<obj->push(11)<<endl;
	cout<<obj->push(22)<<endl;
	cout<<obj->push(33)<<endl;
	cout<<obj->push(44)<<endl;
	cout<<obj->push(55)<<endl;
	
	obj->displaytopvalue();
	obj->displayelement();
	return 0;
}
