class linklist{
	public:
		linklist *node;
		int data;
	void traverse(linklist *);	
//	linklist insert(linklist *, int);
	
int  insert(linklist *head, int data){
	linklist *ptr=new linklist;
	ptr->node=head;
	ptr->data=data;
	int c;
	c= (int)ptr;
	return ptr;
}
};
