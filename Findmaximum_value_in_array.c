#include<stdio.h>

int main(){
    int n ;

    printf("Enter the number of elements :");
    scanf("%d" , &n);


    int arr[n];

    printf("Enter %d elements :" , n);
    for ( int i = 0 ; i < n ; i++ ){
        scanf("%d" , &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[1];

    for ( int i = 1 ; i < n ; i++){
        if ( arr[0] > max1 &&  ){
            max = arr[i];
        }
    }

    printf("Maximum value in the array = %d\n " , max );

    return 0 ;
}