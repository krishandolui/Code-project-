#include<stdio.h>

int exactly3Divisors( int n)
{
    int count = 0 ;
    for ( int i = 1 ; i <= n ; i++)
    {
        if( n % i == 0 )
        {
            count++;
        }

    }
    return count;
}

int countDivisors( int n)
{
    int total = 0 ;
    for ( int i = 1 ; i <= n ; i++)
        {
            if ( int i = 1 ; i <= n ; i++)
            {
                if ( exactly3Divisors(i)== 3)
                {
                    total++;
                }
            }
            return total;
        }
}