#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    struct Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

Node* reverse(Node* head){
     Node* current = head; 
    Node *prev = NULL, *next = NULL; 
  
    while (current != NULL) { 
        next = current->next; 
        current->next = prev;  
        prev = current; 
        current = next; 
    } 
    head = prev;
    return head;
}

void printList(struct Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){

    int data=1;
    Node* dummy=newNode(0);
    Node* head=dummy;
    while(data<7){
        head->next=newNode(data);
        head=head->next;
        data++;
    }
    printList(dummy->next);
    cout<<"\n";
    dummy=reverse(dummy->next);
    cout<<"\n";
    printList(dummy);
}
