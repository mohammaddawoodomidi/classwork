#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void swap(struct node *head, struct node *temp1){       // swaps data of two nodes
    int k = head->data;
    head->data = temp1->data;
    temp1->data = k;
}

void add_at_end( struct node *ptr, int number){         // making a linked list by add_at_end approach
    struct node *next = malloc(sizeof(struct node));
    next->data = number;
    next->link = NULL;
    
    struct node *traverse = ptr;
    while(traverse->link != NULL){      // traverses the linked list until it reaches the last node.
        traverse = traverse->link;
    }
    traverse->link = next;              // connects the newly built node to the last node.
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 101;
    head->link = NULL;
    
    add_at_end(head, 101);
    add_at_end(head, 36);
    add_at_end(head, 64);
    add_at_end(head, 25);
    
    struct node *temp0, *temp1;
    temp0 = head;
    
    printf("Unsorted numbers : \n" );
    for(int j = 0; j<5; ++j){
        printf("%d  ", head->data);
        head = head->link;
    }
    printf("\n");
    head = temp0;
    temp1 = head->link;
    
    while(head->link != NULL){              // this loop traverses the linked list to compare each pair.
        if (head->data > temp1->data){
            swap(head, temp1);
            head = temp0;                   // when one swap is done, the checking procedure starts over.
            temp1 = head->link;             // temp1 pointer needs to be updated to stay contiguous with the head pointer.
        }
        else {
        head = head->link;          // head pointer proceeds further without doing anything and so temp1 pointer. temp1 pointer needs to be one node ahead.
        temp1 = head->link;
        }
    }
    head = temp0;
    printf("Sorted in ascending order: \n");
    for(int i = 0; i<5; ++i){
        printf("%d  ", head->data);
        head = head->link;
    }
    printf("\n");
    return 0;
}
