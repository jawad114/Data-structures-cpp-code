#include<iostream>
#include"head.h"
using namespace::std;
void sorting::print(int *A){
	for(int i=0; i<5; i++){
		cout<<" "<<A[i];
	}
}
sorting* sorting::sort(int* A){
	int min,temp;
	for(int i=0; i<4; i++){
		min=i;
		for(int j=i+1; j<5; j++){
			if(A[j]<A[i]){
				min=j;
			}
		}
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
	}
}
//cout<<endl;
