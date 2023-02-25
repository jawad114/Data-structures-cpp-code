#include <iostream>
#include"head.h"
using namespace::std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack s;
	s.enque(44);
	s.enque(22);
	s.enque(55);
	s.deque();
	cout<<"\nThe q is implemented succcefully";
	return 0;
}
