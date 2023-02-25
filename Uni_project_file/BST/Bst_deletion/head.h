class node{
	public:
		int data;
		node* left;
		node* right;
		node* create_node(int);
		node* inorder_traversal(node*);
		node* deletion(node*, int);
		node* ipred(node*);
		node* preorder_traversal(node*);
};
