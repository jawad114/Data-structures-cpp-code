class node{
	int data;
	node* left;
	node* right;
	node* create_node(int);
	node* pre_order(node*);
	node* deletion(node*, int);
};
