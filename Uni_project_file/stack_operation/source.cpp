#include<iostream>
#include"head.h"
using namespace::std;
void stack::push(int val){
	if(r==3){
		cout<<"The stack is full"<<endl;
	}
	else{
		r++;
	array[r]=val;
	cout<<"The pushed element is:"<<array[r]<<endl;
}
}
void stack::pop(){
	if(r==0){
		cout<<"The stack is empty"<<endl;
	}
	else{
		array[r];
			r--;
		cout<<"The poped element is:"<<array[r]<<endl;
	}
}
