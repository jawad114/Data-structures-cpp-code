#include<iostream>
using namespace::std;
class item{
	private:
		int data;
	public:
		item(int d){
			data=d;
		}	
		int getdata(){
			return data;
		}
};
class hashtable{
	private:
		item* hasharray[19];
		int tablesize=19;
	public:
		hashtable(){
			for(int i=0; i<=19; i++){
				hasharray[i]=new item(-1);
			}
		}	
		int hashfunction(int data){
			return data% this->tablesize;
		}
		void insert(item* i){
			int data=i->getdata();
			int hashvalue=hashfunction(data);
			while(hasharray[hashvalue]->getdata()!=-1){
				hashvalue++;
				hashvalue=hashvalue%tablesize;
			}
			hasharray[hashvalue]=i;
			cout<<"value inserted"<<endl;
		}
		int find(item *i){
				int data=i->getdata();
			int hashvalue=hashfunction(data);
			while(hasharray[hashvalue]->getdata()!=-1){
				if(hasharray[hashvalue]->getdata()==data){
					cout<<"value found"<<endl;
					return 0;
				}
				hashvalue++;
				hashvalue=hashvalue%tablesize;
			}
			cout<<"value not found"<<endl;
			return 0;
		}
};
int main(){
	hashtable* o=new hashtable;
	o->insert(new item(3));
	o->find(new item(33 ));
}
