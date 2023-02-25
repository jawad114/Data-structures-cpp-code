#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	sorting s;
	int A[5]={3,5,2,34,8};
	s.print(A);
	s.sort(A);
	cout<<endl;
	s.print(A);
	return 0;
}
