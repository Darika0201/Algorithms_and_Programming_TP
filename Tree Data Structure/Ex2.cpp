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
    int *num;
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
void Inorder(Node *root){
    if(root != NULL){
        Inorder(root -> left);
        cout <<  root -> data << " " ;
        Inorder(root -> right);
    }
}
int main()
{
    int num;
    char select;
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
    cout << "a. Display this tree using an in-order traversal.";
    cout << "\nb. Input the number and search whether it is in the tree.";
    while(1){
        cout << "\n\nSelect (a/b): "; cin >> select;
        if(select=='a'){
            cout << "\nIn-order traversal = " ; Inorder(root);
            cout << endl;
        }else if(select=='b'){
            while(1){
                cout << "\nInput the number: "; cin >> num;
                if(search(root,num)){
                    cout << "\nThis number "<< num << " is in the tree.\n" ;
                }else{
                    cout << "\n" << num << " dose not exist in the tree.\n" ;
                }
            }

        }
    }
}


