class node{
	public:
		int data;
		node* left;
		node* right;
		node* pre_order_traversal(node*);
		node* in_order_traversal(node* );
		node* post_order_traversal(node* );
		node* creat_node(int);
		node* search_node(node*, int);
		node* it_search(node* , int);
		node* insertion(node*, int);
};
