//
//  headAddRemove.c
//  C_study
//
//  Created by 김준철 on 2021/08/20.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int data;
    struct _Node *next;
} Node;

void addFirst(Node *target, int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode -> next = target -> next;
    newNode -> data = data;
    
    target -> next = newNode;
}

void removeFirst(Node *target) {
    Node *removeNode = target -> next;
    target -> next = removeNode -> next;
    free(removeNode);
}

Node* findNode(Node *node, int value) {
    Node *curr = node -> next;
    while (curr != NULL) {
        if (curr -> data == value) {
            return curr;
        }
        curr = curr -> next;
    }
    return NULL;
}

int main() {
    Node *head = malloc(sizeof(Node));
    head -> next = NULL;
    
    addFirst(head, 10);
    addFirst(head, 20);
    addFirst(head, 30);
    removeFirst(head);
    addFirst(head, 100);
    
    printf("find noed: %d\n", findNode(head, 20) -> data);
    
    Node *curr = head -> next;
    while (curr != NULL) {
        printf("%d\n", curr -> data);
        free(curr);
        curr = curr -> next;
    }
    
    return 0;
}
