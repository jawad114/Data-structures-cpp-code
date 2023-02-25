class node{
	public:
		int data;
		node* left;
		node* right;
		node* inorder(node*);
		node* createnode(int);
		node* deletion(node*, int);
		node* ipred(node*);
};
