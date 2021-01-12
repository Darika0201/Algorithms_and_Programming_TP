#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};
int getSize(Node *root){
    if(root == NULL){
        return 0;
    }else{
        return(1 + getSize(root ->left) + getSize(root ->right));
    }
}
Node *insert(Node *root, int data){
    if(root == NULL){
        root = new Node;
        root ->left = NULL;
        root ->right = NULL;
        root ->data = data;
    }else if(data < root ->data){
        root ->left = insert(root ->left, data);
    }else if(data > root ->data){
        root ->right = insert(root->right, data);
    }
    return root;
}
bool search(Node *root, int data){
    if(root == NULL){
        return false;
    }else if(data == root->data){
        return true;
    }else if(data >= root ->data){
        return search(root ->right, data);
    }else if(data <= root ->data){
        return search(root ->left, data);
    }
}
void Preorder(Node *root){
    if(root != NULL){
        cout <<  root -> data << " " ;
        Preorder(root -> left);
        Preorder(root -> right);
    }
}
void Inorder(Node *root){
    if(root != NULL){
        Inorder(root -> left);
        cout <<  root -> data << " " ;
        Inorder(root -> right);
    }
}
void Postorder(Node *root){
    if(root != NULL){
        Postorder(root -> left);
        Postorder(root -> right);
        cout <<  root -> data << " " ;
    }
}
int main()
{
    Node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 14);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 13);

    cout << "Pre-order = " ;    Preorder(root);
    cout << endl;
    cout << "In-order = " ;     Inorder(root);
    cout << endl;
    cout << "Post-order = " ;   Postorder(root);
    cout << endl ;
}


