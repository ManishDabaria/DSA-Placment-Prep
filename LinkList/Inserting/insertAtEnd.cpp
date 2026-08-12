#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;

void insertEnd(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    //If the list is empty
    if(head == nullptr){
        head = newNode;
        return;
    }

    //Traverse to the last node
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    //Link the new node
    temp->next = newNode;
}

//Function to display the linked list
void display(){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

//Main function
int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    cout<<"Linked List";
    display();

    return 0;
}