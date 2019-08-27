#include<iostream>
using namespace std;


class node
{
	public:
    int val;
    struct node* left;
    struct node* right;
    int ht;
} ; 
int max(int a,int b)
{
    return (a>b)?a:b;
}
int  height(node* n)
{
    if(n==NULL)
    {
        return 0;
    }
    
        return (n->ht);
    
}
int getBal(node* n)
{
    if(n == NULL)
    {
        return 0;
    }
    
        return height(n->left) - height(n->right);
    
}
node* newnode(int data)
{
    node* newn = new node();
    newn->val = data;
    newn->left = NULL;
    newn->right = NULL;
    newn->ht = 1;
    return newn;
}
node* left(node* x)
{
    node* y = x->right;
    node* t2 = y->left;
    
    y->left= x;
    x->right= t2;
    
    x->ht = max(height(x->left),height(x->right)) + 1;
    y->ht = max(height(y->left),height(y->right)) + 1;
    return y;
}
node* right(node* y)
{
        node* x = y->left;
        node* t2 = x->right;
        //rotation
        x->right = y;
        y->left = t2;
    
        x->ht = max(height(x->left),height(x->right)) + 1;
        y->ht = max(height(y->left),height(y->right)) + 1;
    return x;
    
}
node * insert(node * root,int val)
{
    
    if(root == NULL)
    {
        return(newnode(val));
    }
     if(root->val > val)
    {
        root->left = insert(root->left,val);
    }
    else if(root->val < val)
    {
        root->right = insert(root->right,val);
    }
    else
    {
        return root;
    }
    root->ht = max(height(root->left),height(root->right))+1;
    
    int bal = getBal(root);
    
    if(bal > 1 && val < root->left->val)
    {
        return right(root);
    }
    //lR
     if(bal > 1 && val > root->left->val)
    {
        root->left = left(root->left);
        return right(root);
    }
    //rl
     if(bal < -1 && val<root->right->val)
    {
        root->right = right(root->right);
        return left(root);
    }
     if(bal < -1 && val > root->right->val)
    {
        return left(root);   
    }
    return root;
}







void preOrder(node *root)  
{  
    if(root != NULL)  
    {  
        cout << root->val << " ";  
        preOrder(root->left);  
        preOrder(root->right);  
    }  
}  
  
// Driver Code 
int main()  
{  
    node *root = NULL;  
      
    /* Constructing tree given in  
    the above figure */
    root = insert(root, 10);  
    root = insert(root, 20);  
    root = insert(root, 30);  
    root = insert(root, 40);  
    root = insert(root, 50);  
    root = insert(root, 25);  
      
    /* The constructed AVL Tree would be  
                30  
            / \  
            20 40  
            / \ \  
        10 25 50  
    */
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";  
    preOrder(root);  
      
    return 0;  
}  
