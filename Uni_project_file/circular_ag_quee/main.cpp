#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack s;
	s.enque(45);
	s.enque(553);
	s.enque(50);
	s.deque();
	s.enque(53);
	s.enque(53);
	return 0;
}
