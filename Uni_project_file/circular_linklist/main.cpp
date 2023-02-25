#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	clist *head,*second,*third, obj;
	head->data=87;
	head->next=second;
	second->data=33;
	second->next=third;
	third->data=76;
	third->next=head;
	return 0;
}
