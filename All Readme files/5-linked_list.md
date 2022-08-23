# Linked List

- linked list is a data structure used for storing collections of data.
- linked list has the following properties:
    - successive elements are connected by pointers.
    - last element points to NULL
    - it can grow or shrink size during execution of a program.
    - it can be made just as long as required.
    - it does not waste memory space.
- yeh ek linear collection of data hai.

## Diagramatic representation of a linked list

![linked list](/All%20Readme%20files/all%20images/linked_list.png)

isme bane variables ke naam nahi hote, yeh sab dynamically bante hai. pink box pointer hai, while blue box variable jaise hai jo ki value store karega 
aakhri wale variable me kya hai? woh hai `null` cause woh kisi ko bhi point nahi kar raha hai.

There are three main linked list operations:
    - insertion 
    - deletion
    - traversing

## why linked list?

## array vs linked list

for eg. mujhe apne student ki marks store karne hai, toh woh mai tab hi kar sakta hu jab mujhe number of students pata hai, kyuki mujhe banate waqt hi array ki length specify karni hoti hai and i can't change it during runtime(dynamic array bhi use kar sakte hai, yeh array and linked list ke beech ki cheez hoti hai).

memory flexibility milegi hume linked list me, aur jo speed hai woh milegi hume array me kyuki array me jo data hai woh linearly data store hota hai.

## what is node?

- when we talk about storing list of information each info set is a node which also plays a role of connection point in the list.
- toh agar hum diagramatic representation dekhe toh hum yeh dekh sakte hai ki jo memory block hai woh primitive type ka toh nahi hai. Yaani woh int, ya float aisa kuch nahi hai **toh how do you define a block in a linked list**.Iss data type ko hum node bolte hai.

```cpp
struct node{
    int info;
    struct node *link;
}
```

toh agar hum iss struct ko dekh dhyaan se toh hum yeh bata sakte hai ki, jo blue box hai(in diagramatic representation) woh hai info aur jo pink box hai woh hai pointer `link`.

### start pointer 

`struct node *START = NULL;` 

toh hume start variable ki jarurat hogi jo first block ya node ko point karega, but in this case yeh toh `NULL` ko point kar raha hai, aisa kyu? Null isliye kyuki abhi toh isme koi bhi value aai hi nahi hai, jabtak koi node bana hi nahi hai toh woh kise point karega. 

## Operations

- Insertion
    - at the end
    - at the beginning 
    - after a node
- deletion
    - last node 
    - first node
    - particular node
- traversing

### insertion at the beginning

```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int info;
    struct node *link;
};

struct node *START = NULL;
/*
creating a function that can create a node for use when required
*/
struct node* createNode(){
    struct node *n;
    // toh idhar hum malloc function ka use karke ek node create kar rahe hai but jo malloc function hai woh void type ka return deta hai toh humne uske aage (struct node*) laga ke use typecast kar liya hai aur node type ka bana liya hai.
    n =(struct node*) malloc(sizeof(struct node));
    return n;
}

void insertNode(){
    struct node *temp , *t;
    temp = createNode();
    printf("enter a number: ");
    scanf("%d", &temp->info);
    temp->link = NULL;
    if(START = NULL){
        START = temp;
    }else{
        t = START;
        while(t-> link != NULL){
            t = t->link;
        }
        t->link = temp;
    }
}
```

### deletion of first node

```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int info;
    struct node *link;
};

struct node *START = NULL;
/*
creating a function that can create a node for use when required
*/
struct node* createNode(){
    struct node *n;
    // toh idhar hum malloc function ka use karke ek node create kar rahe hai but jo malloc function hai woh void type ka return deta hai toh humne uske aage (struct node*) laga ke use typecast kar liya hai aur node type ka bana liya hai.
    n =(struct node*) malloc(sizeof(struct node));
    return n;
}

// Insertion of Node

void insertNode(){
    struct node *temp , *t;
    temp = createNode();
    printf("enter a number: ");
    scanf("%d", &temp->info);
    temp->link = NULL;
    if(START = NULL){
        START = temp;
    }else{
        t = START;
        while(t-> link != NULL){
            t = t->link;
        }
        t->link = temp;
    }
}

// DELETION OF NODE

void deleteNode(){
    struct node *r;
    if(START == NULL){
        cout << "string is empty";
    }else{
        // storing first node location so that we can delete it in the future
        r = START;
        // replacing second node location in START pointer 
        START = START->link;
        // releasing first node using free function
        free(r);
    }
}
```


---

# these notes are from apni kaksha

### creation, insertion of data at tail and head , searching for a data, displaying whole linked list

```cpp
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

int main(){
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAthead(head, 5);
    display(head);
}
```

### deletion in linked list

```cpp
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

void deleteatHead(node* &head){
    node *todelete = head;
    head = head->next;
    delete todelete;
}
```

## Reversing a linked list

### iterative method


