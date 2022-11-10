#include <stdio.h>

void swap(int *array1, int *array2){
    int k = *array1;
    *array1 = *array2;
    *array2 = k;
}


void quick_sort(int array3[],int c , int l){     
    
    
}
void partition(int array4[], int c, int l){
    

    
}


int main(){
    
    int a[5] = {101, 101, 36, 64, 25};
    
    printf("Unsorted numbers : \n");
    for(int y = 0; y<5; ++y){
        printf("%d  ", a[y]);
    }
    printf("\n");

    quick_sort(a, 5, 4);                   
    
    
    
    printf("Sorted in ascending order: \n");
    for(int z=0; z<5; ++z){
        printf("%d  ", a[z]);
    }
    printf("\n");
    
    return 0;
}
