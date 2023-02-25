#include <iostream>
#include"head.h"
using namespace::std;
int main(int argc, char** argv) {
	node o;
	int A[5]={6,4,2,5,7};
//	o.bubble_sorting(A);
	o.selection_sort(A);
//	o.insertion_sort(A);
	o.searching(3);
	o.display(A);
	return 0;
}
