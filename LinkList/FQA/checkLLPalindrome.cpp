#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(){
        val = 0;
        next = nullptr;
    }
    ListNode(int data1){
        val = data1;
        next = nullptr;
    }
    ListNode(int data1, ListNode* next1){
        val = data1;
        next = next1;
    }
};

class Solution{
public:
    bool isPalindrome(ListNode* head){
        stack<int> st;

        ListNode* temp = head;

        while(temp != nullptr){
            st.push(temp->val);

            temp = temp->next;
        }


        temp = head;

        while(temp != nullptr){
            if(temp->val != st.top()){
                return false;
            }

            st.pop;

            temp = temp->next;
        }

        return true;

    }
}

void printLinkedList(ListNode* head){
    ListNode* temp = head;
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(5);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(1);

    Solution solution;
    if(solution.isPalindrome(head)){
        cout<< "The linked list is a palindrome." << endl;
    } else{
        cout<< "The linked list is not a palindrome." << endl;
    }

    return 0;
}