#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;

void insertKth(int X, int k){
    Node* newNode = new Node();
    newNode->data = X;
    newNode->next = nullptr;

    if(k==1){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i=1; i<k-1 && temp!=nullptr; i++){
        temp = temp -> next;
    }

    if(temp==nullptr){
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return;

}

void display(){
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}