#include<stdio.h>


int singleDigit( int n){

    if ( n == 0 )
    return 0 ;


    if ( n % 9 == 0 )
    return 9 ;


    return ( n % 9);
}

int main()
{
    int n = 1234 ;
    printf("%d", singleDigit(n));
    return 0 ;
}