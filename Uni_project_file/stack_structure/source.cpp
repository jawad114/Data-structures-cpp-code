#include<iostream>
#include"head.h"
using namespace::std;
void stack::isEmpty(){
	top++;
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else{
		cout<<"stack is full"<<endl;
	}
}
