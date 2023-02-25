#include <iostream>
using namespace::std;

class node{
	public:
		int A[5];
		int r=-1;
		int f=-1;
	int push(int val){
		if(r==4){
		cout<<"Overflow occure"<<endl;
	}
	else{
		r++;
		A[r]=val;
		cout<<"Value "<<A[r]<<" inserted sucessfully"<<endl;
	}
	}
	int pop(){
		if(f==4){
			cout<<"Qeues is empty"<<endl;
		}
		else{
			f++;
			cout<<"value "<<A[f]<<" is deleted"<<endl;
		}
	}
};
int main(int argc, char** argv) {
	node o;
	o.push(34);
	o.push(34);
	o.push(34);
	o.push(34);
	o.push(34);
	o.push(34);
	o.push(34);
	o.pop();
	o.pop();
	o.pop();
	o.pop();
	o.pop();
	o.pop();
	o.pop();
	return 0;
}
