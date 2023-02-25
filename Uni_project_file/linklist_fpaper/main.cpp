#include <iostream>
using namespace::std;
class node{
	public:
		int data;
		node* next;
		node* prev;
	node* create_node(int val){
		node* ptr=new node;
		ptr->data=val;
		ptr->next=NULL;
		return ptr;
	}	

node* display(node* head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
       cout<<head->data<<endl;
        display(head->next);
    }
}	
};
int main(int argc, char** argv) {
	node* head,*p,o;
	head->data=34;
	head->next=p;
	p->data=43;
	p->next=NULL;
//	head=o.insertion_at_head(head,34);
//	o.traversal(head);
	o.display(head);
	return 0;
}
