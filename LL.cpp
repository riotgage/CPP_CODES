#include <iostream>
using namespace std;
class LinkedList{

    private:
        struct node{
            int data;
            node *next;
        };
        node *head,*tail;
        
    public:
        LinkedList(){
            head = NULL;
            tail = NULL;
        }

        void insert(int num);
        void display();
        void remove(int index);

        
};

void LinkedList::display(){
    node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<"  ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void LinkedList::insert(int n){
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL){
            head = tmp;
            tail = tmp;
        }
        else{
            tail->next = tmp;
            tail = tail->next;
        }
    
}

void LinkedList::remove(int num){
    node *prev=head;
    node *t=head;
    if(head==NULL){
        cout<<"List is empty\n";
        return;
    }
    if(head->data==num){
        prev=head->next;
        delete(head);
        head=prev;
        return;
    }
    
    while (prev->next!=NULL){
        if(prev->next->data==num){
            break;
        }
        prev=prev->next;
    }
    if(prev->next==NULL){
        cout<<"Number not found\n";
        return;
    }
    t=prev->next->next;
    prev->next=t;

    
} 
int main(){
    LinkedList list;
    int temp,choice;
    do{

        cout<<"1: Insert a number\n";
        cout<<"2: Delete a number\n";
        cout<<"3: Print list\n";
        cout<<"4: Exit\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"\nEnter a number";
            cin>>temp;
            list.insert(temp);
            break;
        case 2:
            cout<<"\nEnter number";
            cin>>temp;
            list.remove(temp);
            break;
        case 3:
            cout<<"\n";
            list.display();
            break; 
        case 4:
            cout<<"exiting";
            break;
        default:
            cout<<"wrong choice\n";
            break;
        }
    }while (choice!=4);
    return 0;
}