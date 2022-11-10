#include <stdio.h>

void swap(int *array1, int *array2){
    int k = *array1;
    *array1 = *array2;
    *array2 = k;
}


void quick_sort(int array3[],int c , int l){        // c and l determine the pool of numbers to be
                                                    // sorted from the list
    
    if ((l-1>0)){     // this condition states that our array must have more than one element.
        int b = partition(array3, c, l);
        quick_sort(array3, c, b -1);
        quick_sort(array3, b + 1, l);
    }
    
}
int partition(int array4[], int c, int l){

    
    int p = l;              // let's assume the pivot is the last element of the list
    int j = 0;
    for( int i=1; i<l; ++i){
        if(array4[i] < array4[p]){
            j = j + 1;
            swap(&array4[i], &array4[j]);
        }
    swap(&array4[j + 1], &array4[p]);
    }
    return(j + 1);
}


int main(){
    
    int a[5] = {101, 101, 36, 64, 25};
    
    printf("Unsorted numbers : \n");
    for(int y = 0; y<5; ++y){
        printf("%d  ", a[y]);
    }
    printf("\n");

    quick_sort(a, 0, 4);        //               
    
    
    
    printf("Sorted in ascending order: \n");
    for(int z=0; z<5; ++z){
        printf("%d  ", a[z]);
    }
    printf("\n");
    
    return 0;
}
