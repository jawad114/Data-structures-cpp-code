#include <iostream>
using namespace::std;
class item{
	public:
		int data;
		item* next;
		item* prev;
	item(int d){
		data=d;
		next=NULL;
		prev=NULL;
	}	
	int getdata(){
	return data;
	}
	~item(){
		cout<<"Deletion occure here"<<endl;
	}
};
class list{
	private:
		item* head;
		item* tail;
	public:
		list(){
			head=NULL;
			tail=NULL;
		}	
		int insertfirst(item* i){
			if(head==NULL){
				head=i;
				tail=i;
			}
			else
			{
				i->next=head;
				head->prev=i;
				head=i;
			}
	}
			
		int search(item* i){
			if(head==NULL){
				cout<<"There is no node"<<endl;
				return 0;
				
			}
			else
			{
				item* curr=head;
				while(curr!=NULL){
					if(curr->data==i->data){
						cout<<"Value found"<<endl;
						return 0;
					}
			curr=curr->next;
		}
};
class hashtable{
	private:
		list* hasharray[19];
		int tablesize;
	public:
		hashtable(){
			for(int i=0; i<=19; i++){
				hasharray[i]==new list();
			}
		}	
		int hashfunction(int data){
			return data % tablesize;
		}
		int insert(list* i){
			int data=i->getdata();
			int hashvalue=hashfunction(data);
		}
};

int main(int argc, char** argv) {
	return 0;
}
