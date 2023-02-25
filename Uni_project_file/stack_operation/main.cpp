#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	stack sp;
	sp.push(12);
	sp.push(935);
	sp.push(56);
	sp.push(569);
	sp.push(99);
	sp.pop();
	sp.pop();
	sp.pop();
	sp.pop();
	return 0;
}
