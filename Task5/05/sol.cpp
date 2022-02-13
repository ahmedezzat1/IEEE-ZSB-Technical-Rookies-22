   node * insert(node * root, int value)
{
   node *n = new node();
   n->data = value;
   n->left = n->right = NULL;
   
   if(!root) return n;
       
   if(root->data > value ){
       root->left = insert(root->left, value);
   } else {
       root->right = insert(root->right, value);
   }
   
   return root;
}
