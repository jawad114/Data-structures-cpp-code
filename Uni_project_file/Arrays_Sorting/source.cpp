#include<iostream>
#include"head.h"
using namespace::std;
void node::bubble_sorting(int* A){
	int temp;
	for(int i=0; i<=4; i++){
		for(int j=0; j<=4-i; j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void node::insertion_sort(int* A){
	int j,key;
	for(int i=0; i<=4; i++){
		key=A[i];
		j=i-1;
		while(j>=0 && A[j]>key){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=key;
	}
}
void node::selection_sort(int* A){
	int index,temp;
	for(int i=0; i<=4; i++){
		index=i;
		for(int j=i+1; j<=3; j++){
			if(A[j]<A[index]){
				index=j;
			}
		}
		temp=A[i];
		A[i]=A[index];
		A[index]=temp;
	}
}
void node::searching(int val){
	for(int i=0; i<=4; i++){
		if(A[i]==val){
			cout<<"value found"<<endl;
		}
	}
}
void node::display(int* A){
	for(int i=0; i<=4; i++){
		cout<<A[i]<<endl;
	}
}
