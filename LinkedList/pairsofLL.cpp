#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val, Node* next1, Node* prev1){
        data = val;
        next = next1;
        prev = prev1;
    }

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

vector<pair<int, int>> pairofLL(Node* head, int target){
    vector<pair<int, int>> ds; //this is to store the result
    if(head == NULL) return ds;
    Node* left = head;
    Node* right = head;
    while(right->next != NULL){
        right = right->next;
    }

    while(left->data < right->data){
        if(left->data + right->data == target){
            ds.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if(left->data + right->data < target){
            left = left->next;
        }
        else{
            right = right->prev;
        }
    }
    return ds;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third  = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth  = new Node(5);
    Node* sixth  = new Node(6);

    // linking DLL
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = sixth;

    sixth->prev = fifth;

    int target = 7;

    vector<pair<int, int>> ans = pairofLL(head, target);

    cout << "Pairs with sum = " << target << " are:\n";
    for (auto p : ans) {
        cout << "(" << p.first << ", " << p.second << ")\n";
    }

    return 0;
}
