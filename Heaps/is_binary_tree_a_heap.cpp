/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
int nodeCount(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1+nodeCount(root->left) + nodeCount(root->right);
    }
}
bool isCBT(Node* root, int i, int count)
{
    if (root == NULL)
    {
        return true;
    }
    if (i >= count)
    {
        return false;
    }
    else
    {
        return isCBT(root->left,2*i+1,count) && isCBT(root->right,2*i+2,count);
    }
}

bool isMaxOrder(Node* root)
{
    if(root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if(root->right == NULL)
    {
        return root->data > root->left->data;
    }
    else
    {
        return root->data > root->left->data && root->data > root->right->data && isMaxOrder(root->left) && isMaxOrder(root->right);
    }
}
class Solution {
  public:
    bool isHeap(Node* tree) {
        // code here
        int count = nodeCount(tree);
        return isCBT(tree,0,count) && isMaxOrder(tree); 
    }
};

// link: https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1