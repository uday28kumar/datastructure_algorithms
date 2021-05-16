
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
    public:
        T data;
        Node *left, *right;

        Node(T data)
        {
            this->data = data;
            this->left = this->right = NULL;
        }
};

template<class T>
void printBinaryTree(vector<T> res){
    int n = res.size();
    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
/* recursive pre-order traversal of tree
    return: vector
*/
template <class T>
void preOrderOfBinaryTreeUtil(Node<T> *node, vector<T> &res){
    if(node == NULL){
        return;
    }
    res.push_back(node->data);
    preOrderOfBinaryTreeUtil(node->left, res);
    preOrderOfBinaryTreeUtil(node->right, res);
}
template <class T>
vector<T> preOrderOfBinaryTree(Node<T> *root){
    vector<T>res;
    preOrderOfBinaryTreeUtil(root, res);
    return res;
}
/* recursive in-order traversal of tree
    return: vector
*/
template <class T>
void inOrderOfBinaryTreeUtil(Node<T> *node, vector<T> &res){
    if(node == NULL){
        return;
    }
    inOrderOfBinaryTreeUtil(node->left, res);
    res.push_back(node->data);
    inOrderOfBinaryTreeUtil(node->right, res);
}
template <class T>
vector<T> inOrderOfBinaryTree(Node<T> *root){
    vector<T>res;
    inOrderOfBinaryTreeUtil(root, res);
    return res;
}
/* recursive post-order traversal of tree
    return: vector
*/
template <class T>
void postOrderOfBinaryTreeUtil(Node<T> *node, vector<T> &res){
    if(node == NULL){
        return;
    }
    postOrderOfBinaryTreeUtil(node->left, res);
    postOrderOfBinaryTreeUtil(node->right, res);
    res.push_back(node->data);
}
template <class T>
vector<T> postOrderOfBinaryTree(Node<T> *root){
    vector<T>res;
    postOrderOfBinaryTreeUtil(root, res);
    return res;
}
