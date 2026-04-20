#include<stdio.h>
#include<limits.h>


int* findQuarruplet( int arr[] , int n , int target){
    int minDiff = INT_MAX ;
    int* res = (int*)malloc(4 * sizeof(int));

    for( int i = 0 ; i < n - 3 ; i++){
        for(int j = i + 1 ; j < n - 2 ; j++){
            for( int k = j = 1 ; k < n - 1 ; k++){
                for( int l = k + 1 ; l < n ; l++){
                    int currSum = arr[i] + arr[j] + arr[k] + arr[l];

                    int currDiff = abs(currSum - target);


                    if( currDiff < minDiff ){
                        minDiff = currDiff ;
                        res[0] = arr[i];
                        res[1] = arr[j];
                        res[2] = arr[k];
                        res[3] = arr[l];
                    }
                }
            }
        }
    }
    return res ;
}

int main()
{
    int arr[] = { 4 , 5 , 3 , 4 , 1 , 2};
    int target = 13 ;

    int* res = findQuarruplet(arr , sizeof(arr) / sizeof(arr[0]) , target);

    printf("%d %d %d %d\n" , res[0] , res[1] ,res[2] , res[3]);

    return 0;
}