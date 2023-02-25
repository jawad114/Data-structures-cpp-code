class node{
	public:
		int data;
		node* left;
		node* right;
		node* create_node(int);
		node* pre_order(node*);
		node* post_order(node*);
		node* in_order(node*);
		int isbst(node*);
		node* search(node*, int);
		node* itsearch(node*, int);
		node* insertion(node*, int);
};
