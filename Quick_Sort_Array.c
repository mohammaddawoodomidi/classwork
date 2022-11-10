#include <stdio.h>

void swap(int *array1, int *array2){
    int k = *array1;
    *array1 = *array2;
    *array2 = k;
}


void quick_sort(int array3[],int l , int h){     // h is the index of pivot
                                                    // l is the length of our array
    
    
}
void partition(int array4[], int b, int h){
    
    int c[], d[];
    int m = 0;
    int n = 0;
    for(int f = 1; f<5; ++f){
    
        if(array4[0] > array4[f]){
            c[m] = array4[f];
            m = m +1;
        else{
            d[n] = array4[f];
            n = n +1;
            }
        }
    
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
