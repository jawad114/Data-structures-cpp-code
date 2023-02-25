#include<iostream>
#include"head.h"
using namespace::std;
linklist *linklist::traverse(linklist *head){
	linklist *ptr=head;
	while(ptr!='\0'){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
