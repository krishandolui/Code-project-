#include<stdio.h>
int main(){
                 int arr[10] , i , n ;
                 printf("Enter the number of elements :");
                 scanf("%d" , &n);
                 printf("Enter the elements :");
                 for ( int i = 0 ; i < n ; i++){
                     scanf("%d" , &arr[i]);
                 }
             
                 printf("Array elements are :");
                 for ( int i = 0 ; i < n ; i++){
                     printf(" %d  ", arr[i]);
                 }

                 int arraysum;
                 arraysum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9] ;
                 printf("Sum of array elements are .. %d\n" , arraysum);

                 return 0;

}