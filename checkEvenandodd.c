#include<stdio.h>
#include<stdbool.h>


bool isEven(int n){
return n % 2 == 0 ;
}

int main(){
    int n = 15 ;

    if ( isEven(n))
        printf("True\n");
    else 
    printf("false");
    return 0;
    
}