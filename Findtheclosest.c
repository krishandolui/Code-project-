#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


int closestNumber(int n , int m){
    int closest = 0 ;
    int minDifference = INT_MAX ;

    for ( int i = n - asb(m) ; i <= n + asb(m) ; ++i){
        if ( i % m == 0){
            int difference = asb(n - i);

            if ( difference < minDifference || )
        }
    }
}