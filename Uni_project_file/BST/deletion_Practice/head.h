class node{
	public:
		int data;
		node* left;
		node* right;
		node* inorder_traversal(node* );
		node* create_node( int);
		node* deltion(node*, int);
		node* ipred(node*);
};
