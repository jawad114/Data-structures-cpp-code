#include <iostream>
using namespace::std;
class node{
	public:
		int data;
		node* next;
		node* traversal(node* head){
			node* ptr=head;
			while(head!=NULL){
				cout<<head->data<<endl;
				head=head->next;
			}
		}
		node* insert_athead(node* head,int val){
			node* ptr=new node;
			ptr->data=val;
			ptr->next=head;
			head=ptr;
			return ptr;
		
		}
		node* insert_atend(node* head, int val){
			node* ptr=new node;
			node* p=head;
			ptr->data=val;
			ptr->next=NULL;
			while(p->next!=NULL){
				p=p->next;
			}
			p->next=ptr;
			return p;
		}
		node* deletion(node* head){
			node* ptr=head;
			node* prev=NULL;
		}	
};
int main(int argc, char** argv) {
	node* h,o;
	h=new node;
	h->data=34;
	h->next=NULL;
//	h=o.insert_athead(h,343);
	h=o.insert_atend(h,344);
	o.traversal(h);
	return 0;
}
