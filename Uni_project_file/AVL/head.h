class node{
	public:
		int data;
		node* left;
		node* right;
		node* height;
		node* createnode(int);
		node* getbalance(node*);
		node* getheight(node*);
		node* leftrotate(node*);
		node* rightrotate(node*);
		node* insertion( int);
		int* max(int, int);
};
