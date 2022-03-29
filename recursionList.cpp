#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void revPrint(Node* Pointer){
    if (pointer !=nullptr ){
    cout << pointer -> data << endl;
    }
}

int main(){
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    Node* node4 = new Node;

    node1 -> data = 1;
    node2 -> data = 2;
    node3 -> data = 3;
    node4 -> data = 4;

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = NULL;

    ReversePrint(node1);
}
}