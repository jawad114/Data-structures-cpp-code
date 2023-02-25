#include<iostream>
#include"head.h"
using namespace::std;
void stack::enque(int val){
	int a;
	if(r==9){
		cout<<"\nThe quee is full"<<endl;
	}
	else{
		r++;
		array[r]=val;
		cout<<"\nThe enque value is:"<<array[r]<<endl;
		
	}
}
void stack::deque(){
	if(r==f){
		cout<<"The quee is empty"<<endl;
	}
	else{
		f++;
		array[f];
		cout<<"\nThe deqque is "<<array[f]<<endl;
	}
}
