class node{
	public:
		int data;
		node* left;
		node* right;
		int height;
		int get_height(node*);
		int	balance_factor(node*);
		node* create_node(int);
		node* inorder_traversal(node*);
		node* insertion(node*, int);
		node* left_rotation(node*);
		node* right_rotation(node*);
};
