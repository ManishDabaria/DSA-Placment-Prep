#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;

void insertBeginning(int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = head;

    head = newNode;
}

void display(){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){
    insertBeginning(30);
    insertBeginning(20);
    insertBeginning(10);
    insertBeginning(5);

    cout << "Linked List: " ;
    display();

    return 0;
}