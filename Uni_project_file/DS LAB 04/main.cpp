#include <iostream>
using namespace::std;

class stackusingarray{
	private:
	  int index;
	  int array[10];
	  int size;
	public:
		stackusingarray(){
			index=-1;
			size=5;
		}
	
	int push(int x){
		array[++index]=x;
		return x;
	}
	int pop(){
		return array[index--];
	}
	int peak(){
		return array[index];
	}	
};

int main(int argc, char** argv) {
	stackusingarray st;
	int size=5;
	cout<<"Pushed elements "<<endl;
	for(int i=0;i<size;i++){
		cout<<"Pushed elements are "<<st.push(i)<<endl;
		
	}
	
	cout<<"\nPopped out elements "<<endl;
	for(int j=0;j<size;j++){
	cout<<"Popped out elements are "<<st.pop()<<endl;
}

	return 0;
}
