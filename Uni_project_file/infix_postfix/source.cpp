#include<iostream>
#include"head.h"
using namespace::std;
void stack::push(int val){
	if(r==3){
		cout<<"Th stack is full"<<endl;
	}
	else{
		r++;
		array[r]=val;
		cout<<"The pushed value is: "<<array[r]<<endl;
	}
}
void stack::pop(){
	if(r==-1){
		cout<<"The stack is empty"<<endl;
	}
	else{
		array[r];
		cout<<"The poped value is: "<<array[r]<<endl;
		r--;
		
	}
}
void stack::peek(){
	for(int i=0; i<=3; i++){
	r++;
}
cout<<"The peek value is: "<<array[r]<<endl;
	
}
void stack::matching(){
	while(infix[i]!='\0'){
		if(!oper(infix[i])){
			postfix[j]=infix[i];
			i++;
			j++;
		}
		else if(pre(infix[i]>pre(stacktop)))
	}
}
