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
void preOrder(Node *root){
    if(root == nullptr){
        return;
    }
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void convertToMirror(Node *root){
    if(root == nullptr){
        return;
    }
    convertToMirror(root->left);
    convertToMirror(root->right);
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

int main()
{
    // construct the first tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);


    convertToMirror(root);
    preOrder(root); // 4 0 35 0 15 0 26 0
    return 0;
}
