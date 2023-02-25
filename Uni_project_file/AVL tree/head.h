class node{
	public:
		int key;
		node* left;
		node* right;
		int height;
		node* createnode(int);
		node* preorder(node*);
		int getheight(node*);
		int getbalance(node*);
};
