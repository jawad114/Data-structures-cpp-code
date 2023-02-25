#include<iostream>
#include"head.h"
using namespace::std;
void stack::push(){
	if(top==size-1){
		cout<<"\nThe stack is full"<<endl;
	}
	else{
		int s;
		top++;
		s=array;
		cout<<"\nThe value is: "<<s;
	}
}
