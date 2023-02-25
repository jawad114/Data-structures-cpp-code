#include <iostream>
//#include"head.h"
using namespace::std;
class node{
	public:
		int A[10];
		int r=-1;
		int f=9;
	int insertion_At_head(int val){
		if(r==f){
			cout<<"Stack overflow"<<endl;
		}
		else
		{
			r++;
			A[r]=val;
			cout<<"Value "<<A[r]<<" inserted sucessfully"<<endl;
		}
	}	
	int insertion_at_tail(int val){
		if(f==r){
			cout<<"Stack overflow"<<endl;
		}
		else{
			f--;
			A[f]=val;
			cout<<"Value "<<A[f]<<" inserted sucessfully"<<endl;
		}
	}
	int deletion(){
		if(r==-1){
			cout<<"stack is empty"<<endl;
		}
		else
		{
			cout<<"value "<<A[r]<<" deleted sucessfully"<<endl;
			r--;
		}
	}
};
int main(int argc, char** argv) {
	node o;
	o.insertion_At_head(44);
	o.insertion_At_head(34);
	o.insertion_at_tail(43);
	o.insertion_at_tail(34);
	o.insertion_at_tail(434);
	o.insertion_At_head(543);
	o.insertion_At_head(44);
	o.insertion_At_head(34);
	o.insertion_at_tail(43);
	o.insertion_at_tail(34);
	o.insertion_at_tail(434);
	o.insertion_At_head(543);
	return 0;
}
