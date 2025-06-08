#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;

    node(int a)
    {
        this->value = a;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_traversal(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->value << " ";
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
node* builtTree(node *root)
{
    int val=0;
    cout<<"Enter the Value :";
    cin>>val;
    if(val == -1){
        return NULL;
    }
    root = new node(val);
    cout<<"Enter the value of the left node :"<<val<<endl;
    // node* l = new node(lval);
    root->left = builtTree(root->left);
    cout<<"Enter the value of the right node :"<<val<<endl;
    // node* r = new node(rval);
    root->right = builtTree(root->right);
    return root;
}
void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->value<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->value<<" ";
}

// Build tree from level order traversal
node* buildlevel(node* &root)
{
    queue<node*>q;
    int data;
    cout<<"Enter the data for the root node :";
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        
        int lval;
        cout<<"Enter the value for the left node of "<<temp->value<<" :";
        cin>>lval;

        if (lval != -1){
        temp->left = new node(lval);
        q.push(temp->left);
        }
        int rval;
        cout<<"Enter the value for the right node of "<<temp->value<<" :";
        cin>>rval;

        if (rval != -1){
        temp->right = new node(rval);
        q.push(temp->right);
        }        
    }
}

int main()
{
    // input 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    // level input 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    node* root = NULL;
    // root = builtTree(root);
    buildlevel(root);
    level_traversal(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    return 0;
}