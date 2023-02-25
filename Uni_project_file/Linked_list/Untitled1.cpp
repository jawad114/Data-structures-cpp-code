/*
Name: Jawad shah
Reg. No: 20MDSWE114
*/
#include <iostream>
#include<cstdlib> 
 using namespace::std; 
 float *bubble(float arr[],int s){
  for(int out=1;out<s;out++){ 
  for(int in=0;in<s-1;in++) { 
  if(arr[out]>arr[in]) {
   float temp=arr[out]; 
   arr[out]=arr[in]; 
   arr[in]=temp; 
   }
    }
	 }
	  return arr;
	  } 
	  float *insertion(float array[],int s){
	   int out,in; 
	   float temp;
	    for(out=1;out<s;out++) { 
		in=out; temp=array[out];
		 while(in>0 && temp>array[in-1]) {
		  array[in]=array[in-1]; in--;
		  }
		   array[in]=temp;
		    } 
			return array;
			 } 
			 int main(int argc, char** argv) { 
			 int N,I; 
			 cout<<"enter the size of arary:"; 
			 cin>>N; 
			 float arr[N],*in,*bb; 
			 for(int i=0;i<N;i++) {
			  arr[i]=float(rand() % 1000 + 100*0.311);
			   } 
			   bb=bubble(arr,N);
			    cout<<"\nbubble sorted array:";
				 for(int i=0;i<N;i++) { 
				 cout<<*bb<<" "; bb++; 
				 } 
				 in= insertion(arr,N); 
				 cout<<"\n\ninsertion sorted array:";
				  for(int i=0; i<N;i++) { 
				  cout<<*in<<" "; in++;
				  } 
				  return 0;
				   }


