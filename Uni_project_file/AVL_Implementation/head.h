class node{
	public:
		int data;
		node* left;
		node* right;
		int height;
		int max(int, int);
		int getheight(node*);
		int getbalance(node*);
		node* traversal(node*);
		node* insert(node*, int);
		node* create_node(int);
		node* right_rotate(node*);
		node* left_rotate(node*);
		node* min_value_node(node*);
};
