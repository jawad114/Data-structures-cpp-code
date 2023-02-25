#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bsort obj;
	int n=5;
	int array[]={43,53,65,75,4};
	obj.print(array, n);
	obj.bsortt(array, n);
	cout<<endl;
	obj.print(array, n);
	return 0;
}
