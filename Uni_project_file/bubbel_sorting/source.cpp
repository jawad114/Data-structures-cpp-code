#include<iostream>
#include"head.h"
using namespace::std;
int n=5;  
void sorting1::print(int *array, int n){
	for(i=0; i<n; i++){
		cout<<" "<<array[i];
	}
}
void sorting1::sort(int *array, int n){
	int temp;
	int sorted=0;
	for(i=0; i<n-1; i++){
		cout<<"\nWorking"<<i+1<<endl;
		sorted=1;
		for(j=0; j<n-1-i; j++){
			if(array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			sorted=0;
		}
		}
	if(sorted)
	return;	
	}
}
