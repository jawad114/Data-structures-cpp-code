#include<iostream>
#include"head.h"
using namespace::std;
void stack::enque(int val){
	if((r+1)%3==f){
		cout<<"\nThe quee is full"<<endl;
	}
	else{
		r=(r+1)%3;
		array[r]=val;
		cout<<"\nThe enqued element is: "<<array[r]<<endl;
	}
}
void stack::deque(){
	int a=-1;
	if(r==f){
		cout<<"\nThe quee is empty"<<endl;
	}
	else{
		f=(f+1)%3;
		a=array[f];
		cout<<"\nThe deque element is "<<a<<endl;
	}
}
