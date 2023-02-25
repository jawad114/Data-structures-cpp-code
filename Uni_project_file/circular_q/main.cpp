#include <iostream>
#include"head.h"
using namespace::std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack s;
	s.enque(12);
	s.enque(3);
	s.enque(18);
	s.enque(10);
//	s.enque(12);
	s.deque();	
	
	s.enque(88);
	s.enque(98);
	s.enque(98);
	return 0;
}
