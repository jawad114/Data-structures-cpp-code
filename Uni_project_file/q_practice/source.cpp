#include<iostream>
#include"head.h"
using namespace::std;
void stack::enque(int val){
	if((r+1)%4==f){
		cout<<"\nThe quee is full"<<endl;
	}
	else{
		r=(r+1)%4;
		array[r]=val;
		cout<<"\nThe enqu value is:"<<array[r];
	}
	
}
void stack::deque(){
	int a;
	if(r==f){
		cout<<"\nThe quee is empty"<<endl;
	}
	else{
		f=(f+1)%4;
		array[f];
		cout<<"\nThe deque element is:"<<array[f];
	}
}
