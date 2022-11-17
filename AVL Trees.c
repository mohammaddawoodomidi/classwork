#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
    int data;
    struct tree *parent;
    struct tree *left;
    struct tree *right;
}tree;

void add_at_end(int *base, int d){

    tree *new = malloc(sizeof(tree));
    if(new != NULL){
        new->data = d;
        new->left = NULL;
        new->right = NULL;
        new ->parent = NULL;
    }
    tree *temp;
    temp = base;
     
     while( temp->right != NULL){
        temp = temp->right;
     }
        temp->right = new;


}

void swap(tree *head, tree *temp1){       // swaps data of two nodes
    int m = head->data;
    head->data = temp1->data;
    temp1->data = m;
}


void sortAscending(tree *base){         // soring using insertionsort.

        tree *temp0;
        tree *head;
        head = base;
        temp0 = head->right;

    
    while(head->right != NULL){              // this loop traverses the linked list to compare each pair.
        if (head->data > temp0->data){
            swap(head, temp0);
            head = base;                   // when one swap is done, the checking procedure starts over.
            temp0 = head->right;             // temp0 pointer needs to stay one node ahead of head pointer.
        }
        else {
        head = head->right;          // no swap means we can skip the previous element.
        temp0 = head->right;
        }
    }
    head = base;
}

void LeftRotation( tree *base, tree *ahead){

        base->left = ahead;
        base->right = ahead->right;
        ahead->right = NULL;
}

tree *ConstructAVLtree(int *a, int b){

    tree *root = malloc(sizeof(tree));
    if( root != NULL){
        root->data = *a;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
    }
    for(int j = 1; j < b; ++j){
        add_at_end(root, *(a + j));
    }

    sortAscending(root);

    tree *head;
    head = root->right;
    swap(root, head);
    LeftRotation(root, head);






}

int main(){

int array[6] = {3, 1000, 158, 366, 250, 999};

int *k;

k = ConstructAVLtree(array, 6);

while (k != NULL)
{
    printf;
    ++k;
}


return 0;
}