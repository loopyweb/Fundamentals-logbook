#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int d):data(d), left(nullptr),right(nullptr){}
};

class BinaryTree{
    public:
    Node* root;
    BinaryTree():root(nullptr){}

    //return true if empty
    bool empty(){return root == nullptr;}

    //return number of nodes
    int size(Node* n){
        if(n==nullptr) return 0;
        return 1+size(n->left)+size(n->right);
    }

    //pre order
    void preOrder (Node* n){
        if(n==nullptr) return;
        cout<<n->data<< " ";
        preOrder(n->left);
        preOrder(n->right);
    }

    //in order
    void inOrder (Node* n){
        if(n==nullptr) return;
        inOrder(n->left);
        cout<<n->data<< " ";
        inOrder(n->right);
}

    //post order
    void postOrder (Node* n){
        if(n==nullptr) return;
        postOrder(n->left);
        postOrder(n->right);
        cout<<n->data<< " ";
    }
};

int main(){
    BinaryTree bt;

    bt.root=new Node(1);
    bt.root->left= new Node(2);
    bt.root->right=new Node(3);
    bt.root->left->left=new Node(4);
    bt.root->left->right= new Node(5);


    cout<<"Empty: "<<(bt.empty()?"true":"false")<<"\n";
    cout<<"Size: " <<bt.size(bt.root)<<"\n";
    cout<<"Pre order: "; bt.preOrder(bt.root); cout<<"\n";
    cout<<"In order: "; bt.inOrder(bt.root); cout<<"\n";
    cout<<"Post order: "; bt.postOrder(bt.root); cout<<"\n";

    return 0;
}
