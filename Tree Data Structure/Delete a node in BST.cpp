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
//Find min value node of a tree rooted at r
Node *findMin(Node *r){
    while(r ->left != NULL){ //To fine min in BST, go to left
        r = r ->left;
    }
    cout << "\n\nThe minimum number is " << r->data;
    return r;
}
//Function to delete node from a BST
void deleteNode(Node* root, int key){
    Node* parent = NULL;
    Node* curr = root;
    //Find node to be deleted and its parent node
    while(curr != NULL && curr ->data != key){
        parent = curr;
        if(key < curr ->data) curr = curr ->left;
        else curr = curr ->right;
    }
    if(curr == NULL){
        cout << "not found in the tree or tree is empty"; return;
    }
    //****** Case 1: node to be deleted has no children(leaf node)
    if(curr ->left == NULL && curr ->right == NULL){
        if(curr != root){   //If node to be deleted is not root
            if(parent -> left == curr) parent ->left = NULL;
            else parent ->right = NULL;
        }else{//if tree has only root node
            root = NULL;
        }
        delete(curr);
    }
    //****** Case 2: node to be deleted has no children (leaf node)
    else if(curr ->left != NULL && curr ->right != NULL){
        Node* right = findMin(curr ->right); //find min in right subtree
        int val = right ->data;
        deleteNode(root,right->data); //recursively delete the min node
        curr ->data = val;  //Copy the value to current node
    }
    //****** Case 3: node to be deleted has only one child
    else{
        Node* child = (curr ->left)? curr ->left : curr ->right; //find child node
        if(curr != root){ //node to be deleted is not a root node
            if(curr == parent ->left) parent ->left = child;
            else parent ->right = child;
        }else{ // node to be deleted is root node
            root = child;
        }
        delete(curr);
    }
}
int main()
{
    Node *root = NULL;
//    root = new Node; error,no need
    root = insert(root, 12);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 13);
    root = insert(root, 17);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, 14);
    deleteNode(root,14);
    cout << "\nPre-order = " ;    Preorder(root);
    cout << "\nIn-order = " ;     Inorder(root);
    cout << "\nPost-order = " ;   Postorder(root);
    findMin(root);
    cout << endl ;
}



