#include <stdio.h>
#include "link_list.h"

int main() {
    Node* head = NULL;
    int choice, value;
    while (1) {
        printf("\n=== Linked List Studio ===\n");
        printf("[1] Insert at beginning\n");
        printf("[2] Insert at end\n");
        printf("[3] Delete by value\n");
        printf("[4] Display list\n");
        printf("[5] Count nodes\n");
        printf("[6] Clear list\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtBeginning(&head , value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtEnd(&head , value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteByValue(&head , value);
                break;
            case 4:displayList(head);
                break;
            case 5:printf("Have %d Nodes",countNodes(head));
                break;
            case 6:clearList(&head);
                break;
            case 0:
                return 0;
        }
    }
}
