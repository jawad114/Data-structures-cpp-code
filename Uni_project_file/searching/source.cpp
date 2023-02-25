#include<iostream>
#include"head.h"
using namespace::std;
void searching::search(int val){
	int j=0;
	for(i=1; i<=4; i++){
		if(val==A[i]){
			cout<<"The value "<<A[i]<<"  found at index  "<<i<<endl;
			j=1;
		}
	
		}
			if(j){
			return;
		}
		cout<<"The value not found"<<endl;
	
	}

