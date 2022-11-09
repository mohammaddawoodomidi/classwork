#include <stdio.h>

int main(){
    
    int s[5] = {101, 101, 36, 64, 25};

    printf("Unsorted numbers : \n");
    for(int k = 0; k <5; ++k){
        printf("%d  ", s[k]);
    }
    printf("\n");
    
    int *small;
    
    for(int j = 0; j<4; ++j){       // this loop helps the algorithm start from the second element after the first smallest is found and placed.
       
       small = &s[j];
       for(int i = j + 1; i<5; ++i){        //  This loop searches for the smallest element and takes a record of it.
           if( *small > s[i]){
               small = &s[i];
           }  
       }
       int m = s[j];            // putting the smallest value at the beginning of the array by swapping
        s[j] = *small;
        *small = m;
    }
    
    printf("Sorted in ascending order : \n");
    for(int n = 0; n <5; ++n){
        printf("%d  ", s[n]);
    }
    
    return 0;
}
