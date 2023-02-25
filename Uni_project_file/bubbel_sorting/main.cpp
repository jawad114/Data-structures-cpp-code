#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	sorting1 obj;
	int n=5;
//	int array[]={4,6,3,2,1};
	int array[]={34,56,3,75,6};
	obj.print(array, n);
	obj.sort(array, n);
	cout<<endl;
	obj.print(array, n);
	return 0;
}
