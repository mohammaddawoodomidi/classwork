#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *p5 = malloc(sizeof(struct node));                  // making a linked list manually
    p5->data = 25;
    p5->link = NULL;
    
    struct node *p4 = malloc(sizeof(struct node));
    p4->data = 64;
    p4->link = p5;
    
    struct node *p3 = malloc(sizeof(struct node));
    p3->data = 36;
    p3->link = p4;
    
    struct node *p2 = malloc(sizeof(struct node));
    p2->data = 101;
    p2->link = p3;
    
    struct node *p1 = malloc(sizeof(struct  node));
    p1->data = 101;
    p1->link = p2;
    
    struct node *head, *change, *temp, *prnt;
    head = p1;
    change = p1;
    temp = p1;
    prnt = p1;
    
    printf("Unsorted numbers : \n" );
    for(int j = 0; j<5; ++j){
        printf("%d  ", prnt->data);
        prnt = prnt->link;
    }
    printf("\n");
    
    int m;
    for( int i = 1; i<5; ++i){          
        int small = 200;                    // a possible number greater than the elements of the list
                                            // This code is written only for the elements of this linked list.
                                            // Of course, for a program taking input from user, the code needs to be modified in certain ways.
        while( head != NULL ){
            
            if(small > head->data){             // this condition is set to find the smallest element
                small = head->data;
                change = head;                  // this saves the address of the smallest element
            }
            head = head->link;             // this is for traversing
        }
        
        m = temp->data;                 // in short, the swap function; swaps the smallest element with the first element of the linked list
        temp->data = small;
        change->data = m;
        temp = temp->link;
        head = temp;
        
    } 
    printf("Sorted in ascending order : \n");
    printf("%d  ", p1->data);
    printf("%d  ", p2->data);
    printf("%d  ", p3->data);
    printf("%d  ", p4->data);
    printf("%d  ", p5->data);
    
    return 0;
}
