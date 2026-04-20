#include<stdio.h>

void subArray( int arr[] , int n){
    for ( int i = 0 ; i <= n ; i++){
        for ( int j = i ; j <= n ; j++){
            for ( int k = i ; k <= j ; k++){
                printf("%d",arr[k]);
            }
            printf("\n");
        }
    }
}

int main(){
    int arr[] = { 1  , 2  , 3,  4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("All Non nempty Subarrays :\n");
    subArray( arr , n);
    return 0;
}