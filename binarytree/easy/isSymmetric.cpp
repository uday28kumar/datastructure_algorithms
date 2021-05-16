#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
bool isSymmetric(Node *root1, Node *root2){
    if(root1 == nullptr && root2 == nullptr){
        return true;
    }
    if(root1==nullptr || root2==nullptr){
        return false;
    }
    return isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
}

int main()
{
    // construct the first tree
    Node* x = nullptr;

    x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);

    // construct the second tree
    Node* y = nullptr;

    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(25);

    cout<<isSymmetric(x, y);
    return 0;
}
