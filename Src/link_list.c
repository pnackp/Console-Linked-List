#include <stdio.h>
#include <stdlib.h>
#include "link_list.h"

Node *createNode(int data){
    Node* newNode = malloc(sizeof(Node));
    if (newNode == NULL) return NULL;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data){
    Node* newNode = createNode(data); // call function for create node;
    if (newNode == NULL){return;}
    newNode->next = *head; 
    *head = newNode;
    return;
}

void insertAtEnd(Node** head, int data){ // if head != Null and next != Null then replace Null with newnode , newnode->next = NULL  ; 
    Node* newNode = createNode(data);
    if (newNode == NULL){return;}
    Node *ptr = *head;
    while (ptr != NULL){ 
        if (ptr->next == NULL){
            ptr->next = newNode;
            return;
        }
        ptr = ptr->next;
    }
    return;
}

void deleteByValue(Node** head, int data){ // delete Node
    Node* ptr = *head; 
    Node* prev = NULL;
    if (ptr != NULL && ptr->data == data){ //if head ! =NULL and Data in structer head Equal input then
        *head = ptr->next;//move to next and free previous
        free(ptr);
        return;
    }
    while (ptr != NULL && ptr->data != data){ // if != null and != input 
        prev = ptr; 
        ptr = ptr->next; // move till find 
    }
    if(ptr == NULL){return;} //if we dont return ;
    prev->next = ptr->next; // if we found delete node and connect between left and right of node we deleted
    free(ptr); // free 
    return; 
}

void displayList(Node* head){
    while (head != NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL");
    return;
}

int countNodes(Node* head){
    int x = 0;
    while (head != NULL)
    {
        x += 1;
        head = head->next;
    }
    return x;
}

void clearList(Node** head){
    Node *ptr = *head;
    while (ptr != NULL) {
        Node* temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    *head = NULL;
    return;
}