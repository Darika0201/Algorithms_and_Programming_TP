#include <iostream>
using namespace std;

struct Node{
    char data;
    struct Node *left, *right;
};
int getSize(Node *root){
    if(root == NULL){
        return 0;
    }else{
        return(1 + getSize(root ->left) + getSize(root ->right));
    }
}
Node *insert(Node *root, char data){
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
bool search(Node *root, char data){
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
void Preorder(Node *root)   //DLR
{
    if(root != NULL){
        cout <<  root -> data << " " ;
        Preorder(root -> left);
        Preorder(root -> right);
    }
}
void Inorder(Node *root)    //LDR
{
    if(root != NULL){
        Inorder(root -> left);
        cout <<  root -> data << " " ;
        Inorder(root -> right);
    }
}
void Postorder(Node *root)  //LRD
{
    if(root != NULL){
        Postorder(root -> left);
        Postorder(root -> right);
        cout <<  root -> data << " " ;
    }
}
int main()
{
    Node *root = NULL;
//    root = new Node; error,no need
    root = insert(root, 'F');
    root = insert(root, 'D');
    root = insert(root, 'J');
    root = insert(root, 'B');
    root = insert(root, 'E');
    root = insert(root, 'G');
    root = insert(root, 'K');
    root = insert(root, 'A');
    root = insert(root, 'C');
    root = insert(root, 'I');
    root = insert(root, 'H');
    cout << "Pre-order = " ;    Preorder(root);
    cout << endl;
    cout << "In-order = " ;     Inorder(root);
    cout << endl;
    cout << "Post-order = " ;   Postorder(root);
    cout << endl ;
}


