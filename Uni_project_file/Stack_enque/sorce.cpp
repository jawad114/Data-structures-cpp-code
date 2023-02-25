#include<iostream>
#include"head.h"
using namespace::std;
void stack::enque(int x){
	int value;
	if(r==1){
		cout<<"\nThe queee is full"<<endl;
}
	else{
		r++;
		int value;
		value=x;
		array[r];
		cout<<"\nThe value of rear is:"<<r;	
		cout<<"\nThe value is:"<<value;
	}
}
void stack::deque(){
	int a=-1, val;
	if(r==f){
		cout<<"The quue is empty"<<endl;
	}
	else{
		f++;
		val=array[f];
		cout<<"The deque element is "<<val;
	}
}

