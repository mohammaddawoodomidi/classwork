#include <stdio.h>

void swap(int *ptr1, int *ptr2){            // swaps two elements
    
   int k = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = k;
}

void insert_sort(int array[], int length){          // array can also work as a pointer and store an address
    int x, y, z;
    for(x = 1; x<length; ++x){      // this loop is for traversing the array
        y = x;                          // updates y as x increases. The difference between x and y should not be more than 1. Otherwise, it won't be contiguous.
        while((y>0) && (array[y] < array[y-1])){            // this loop compares each contiguous pair and shifts the smaller element to the left.
            swap(&array[y], &array[y-1]);
            y = y - 1;                      // This is needed for chekcing the previous pairs as x proceeds further.
        }
    }
}

int main() {
    
   int a[5] = {101, 101, 36, 64, 25};
   
   printf("Unsorted numbers: \n");
   for(int i = 0; i<5; ++i){
       printf("%d  ", a[i]);
   }
   printf("\n");
   
   insert_sort(a, 5);               
   
   printf("Sorted in ascending order: \n");
   for(int j = 0; j<5; ++j){
       printf("%d  ", a[j]);
   }
   printf("\n");
    return 0;
}
