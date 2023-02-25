#include <iostream>
#include"head.h"
using namespace::std;

int main(int argc, char** argv) {
  linklist *head,*second,*third,*obj;
  head= new linklist;
  second =new linklist;
  third = new linklist;
  head->data=8;
  head->next=second;
  second->data=99;
  second->next=third;
  third->data=73;
  third->next=NULL;
  obj->trvaersal(head);
  obj->insertion_start(head,55);
  obj->trvaersal(head);
	return 0;
}
