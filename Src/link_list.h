#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    int data; 
    struct Node * next;
}Node;

Node* createNode(int data);
void insertAtBeginning(Node** head, int data);
void insertAtEnd(Node** head, int data);
void deleteByValue(Node** head, int data);
void displayList(Node* head);
int countNodes(Node* head);
void clearList(Node** head);
#endif