#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* reverseDll(Node* head){
    //replacing the temp data-> by using stack
    Node* temp = head;
    stack<int> st;
    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;

    while(temp != NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    //creating a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original LL " << " ";
    printList(head);
    head = reverseDll(head);
    cout << "Reverse LL " << " ";
    printList(head);
    return 0;
}   


//to do this in single traversal
// Node* revDll(Node* head){
//     //by swapping the links
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
//     Node* temp = head;
//     Node* prev = NULL;

//     while(temp != NULL){
//         prev = temp->prev;
//         temp->prev = temp->next;
//         temp->next = prev;

//         temp = temp->prev;
//     }
//     return prev->prev;
// }