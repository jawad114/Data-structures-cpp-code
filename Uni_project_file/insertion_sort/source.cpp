#include<iostream>
#include"head.h"
using namespace::std;
void bsort::print(int *array, int n){
	for(i=0; i<n; i++){
		cout<<" "<<array[i];
	}
}
void bsort::bsortt(int *array, int){
	for(i=0; i<=n-1; i++){
		k=array[i];
		j=i-1;
		while(j>=0 && array[j]>k){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=k;
	}
}
