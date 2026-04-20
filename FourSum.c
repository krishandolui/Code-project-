#include<stdio.h>

int compare( const void *a , const void *b){
    return (*(int *)a - *(int *)b);
}


int isDuplicate( int res[][4] , int resSize , int curr[]){
    for( int i = 0 ; i < resSize ; i++){
        if( res[i][0] == curr[0] && res[i][1] == curr[1] && res[i][2] == curr[2] && res[i][3] == curr[3])
        {
            return 1 ;
        }
    }
    return 0;
}


void fourSum( int arr[] , int n , int target ){
    int res[100][4] ;
    int resSize = 0;


    for( int i = 0 ; i < n ; i++){
        for( int j = i + 1 ; j < n ; j++){
            for( int k = j + 1 ; k < n ; k++){
                for( int l = k + 1 ; l < n ; l++){
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                        int curr[] = { arr[i] , arr[j] , arr[k] , arr[l]};

                        qsort( curr , 4 , sizeof(int) , compare);


                        if( !isDuplicate(res , resSize , curr )){
                            for( int m = 0 ; m < 4 ; m++){
                                res[resSize][m] = curr[m];
                            }
                            resSize++;

                            printf("%d %d %d %d\n" , curr[0] , curr[1] , curr[2] , curr[3]);
                        }
                    }
                }
            }
        }
    }
}


int main()
{
    int arr[] = { 10 , 2  , 3 , 4 , 5 ,7 };
    int target = 23 ;
    int n = sizeof(arr) / sizeof(arr[0]);

    fourSum(arr , n , target);
    return 0;
 }   