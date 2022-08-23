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

// TRAVERSING

void viewList(){
    struct node *t;
    if(START == NULL){
        cout << "list is empty";
    }else{
        t = START;
        while(t != NULL){
            cout << t->info << endl;
            t = t->link;
        }
    }
}