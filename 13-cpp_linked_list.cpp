#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int);
};

node::node(int val){
    data = val;
    next = NULL;
}

void insertAtTail(node* &head , int val){
    node *n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node *temp = head;
    while(temp->next != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL" <<  endl;
}

void insertAthead(node* &head, int val){
    node *n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head , int key){
    node *temp = head;
    while(temp->next != NULL){
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}
void deleteatHead(node* &head){
    node *todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteatHead(head);
        return;
    }

    node *temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main(){
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAthead(head, 5);
    display(head);
    deletion(head , 3);
    //deleteatHead(head);
    display(head);
}