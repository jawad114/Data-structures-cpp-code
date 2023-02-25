#include <iostream>
#include"header.h"

using namespace::std;
stack::stack(){
	index = -1;
}
int stack::push(int x){
	array [++ index]=x;
	return x;
}
void stack ::displaytopvalue(){
	if(index = 10){
		cout<<" value of top pointer"<<array[index]<<endl;
	}
}
void stack:: displayelement(){
	cout<<" Return elment in LIFO order"<<endl;
	for(index = 10; index>=0; index--){
		cout<<array[index]<<endl;
	}
}
