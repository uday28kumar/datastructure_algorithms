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
void inOrderTraversal(Node *root){
    if(root == nullptr){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->key<<" ";
    inOrderTraversal(root->right);
}
int convertToSum(Node *root){
    if(root == nullptr){
        return 0;
    }
    int left = convertToSum(root->left);
    int right = convertToSum(root->right);
    int old = root->key;
    root->key = left + right;
    return root->key + old;
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


    convertToSum(root);
    inOrderTraversal(root); // 4 0 35 0 15 0 26 0
    return 0;
}
