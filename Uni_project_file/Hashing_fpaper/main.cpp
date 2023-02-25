#include <iostream>
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
		int tablesize;
	public:	
		hashtable(){
			for(int i=0; i<=19; i++){
				hasharray[i]=new item(-1);
			}
		}
		int hashfunction(int data){
			return data%this->tablesize;
		}	
		int insert(item* i){
			int data=i->getdata();
			int hashvalue=hashfunction(data);
			while(hasharray[hashvalue]->getdata()!=-1){
				hashvalue++;
				hashvalue=hashvalue%tablesize;
			}
			hasharray[hashvalue]=i;
			cout<<"inserted"<<endl;
		}
};
int main(int argc, char** argv) {
	hashtable *p=new hashtable;
	p->insert(new item(45));
	return 0;
}
