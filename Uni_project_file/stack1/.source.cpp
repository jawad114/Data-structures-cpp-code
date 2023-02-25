#include<iostream>
#include"head.h"
using namespace::std;
void stack::push(){
//	int i;
//	for(i=0; i<=4; i++){
//		
//	}
	for(int i=0; i<=4; i++){
		top++;
	if(top<=2){
			arry=i;
			cout<<"The item enterd is"<<arry<<endl;
			cout<<"\n Top value is:"<<top<<endl;
	}
	else{
	
		}
	}
			cout<<"The stack is full"<<endl;
}
void stack::pop(){
	int j=0;
	top--;
	for(int i=0; i<=3; i++){
			top--;
	arry=i;	
	if(top>=0){
		cout<<"The item "<<arry<<" is removed from position "<<j<<endl; 
		j++; 
	}
	else{

	}
}
		cout<<"The stack is empty"<<endl;
}
