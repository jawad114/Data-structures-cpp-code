class node{
	public:
		int data;
		node* left;
		node* right;
		int height;
		node* create_node(int);
		node* insertion(node*, int);
		node* deletion(node*, int);
		int get_height(node* );
		int balance_factor(node*);
		node* in_order_traversal(node*);
		node* insertio_iterative(node*,int);
		node* left_rotation(node*);
		node* right_rotation(node*);
		int max(int, int);
		
};
