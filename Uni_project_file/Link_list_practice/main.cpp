#include <iostream>
#include"head.h"
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	linklist *head, *second,*third,*fourth,*newnode,obj,*temp;
	head=new linklist;
	second=new  linklist;
	third=new  linklist;
	fourth=new linklist;
	newnode=new linklist;
	head->data=44;
	head->node=second;
	second->data=83;
	second->node=third;
	third->data=97;
	third->node=fourth;
	fourth->data=89;
	fourth->node=0;
	obj.traverse(head);
	obj.insert(head, 544);
	obj.traverse(head);
	
	return 0;
}
