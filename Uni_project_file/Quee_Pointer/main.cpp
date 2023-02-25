#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack s;
	s.enque(12);
	s.enque(32);
	s.enque(34);
	s.enque(124);
	s.enque(15);
	s.enque(342);
	s.enque(34);
	s.enque(1234);
	s.enque(123);
	s.enque(32);
	s.enque(343);
	s.enque(122);
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	s.deque();
	return 0;
}
