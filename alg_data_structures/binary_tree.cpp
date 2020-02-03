#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Node{
    public:
        int value;
        Node *left;
        Node *right;

        Node (int m) {
            this->value = m;
            left = NULL;
            right = NULL;
        }
};

int main()
{
    Node *root = new Node(5);
    Node *leftChild = new Node(10);
    Node *rightChild = new Node(3);

    root->left = leftChild;
    root->right = rightChild;

    delete root;
    delete leftChild;
    delete rightChild;

    return 0;
}