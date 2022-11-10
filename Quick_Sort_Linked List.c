#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void swap(struct node *head, struct node *temp1){
    int k = head->data;
    head->data = temp1->data;
    temp1->data = k;
}

void add_at_end( struct node *ptr, int number){
    struct node *next = malloc(sizeof(struct node));
    next->data = number;
    next->link = NULL;
    
    struct node *traverse = ptr;
    while(traverse->link != NULL){
        traverse = traverse->link;
    }
    traverse->link = next;
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
    temp1 = head;
    
    printf("Unsorted numbers : \n" );
    for(int j = 0; j<5; ++j){
        printf("%d  ", head->data);
        head = head->link;
    }
    printf("\n");
    
    
    
    
    
    
    
    
    printf("Sorted in ascending order: \n");
    for(int i = 0; i<5; ++i){
        printf("%d  ", head->data);
        head = head->link;
    }
    printf("\n");
    return 0;
}
