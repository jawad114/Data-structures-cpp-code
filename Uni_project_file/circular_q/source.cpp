#include<iostream>
#include"head.h"
using namespace::std;
void stack::enque(int val){
	if(((r+1)%3)==0){
		cout<<"\nThe quee is full"<<endl;
	}
	else{
		r=(r+1)%3;
		array[r]=val;
		cout<<"\nThe enque is "<<array[r];
			cout<<"\n"<<r<<"\n"<<f<<endl;
	}
}
void stack::deque(){
	if(r=f){
		cout<<"Stack is empty"<<endl;
	}
	else{
		f=(f+1)%4;
		array[f];
		cout<<"The deque element is "<<array[f];
	}
}
