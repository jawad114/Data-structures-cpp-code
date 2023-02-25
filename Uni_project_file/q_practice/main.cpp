#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack s;
	s.enque(44);
	s.enque(34);
	s.enque(56);
	s.enque(23);
	s.deque();
	s.deque();
	s.enque(54);
	s.enque(23);
	s.enque(23);
	return 0;
}
