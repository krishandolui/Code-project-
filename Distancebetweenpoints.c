#include<stdio.h>
#include<math.h>


float distance ( int x1 , int y1 , int x2 , int y2 ){
    return sqrt( pow(x2 - y1 , 2) + pow( y2 - y1 , 2) * 1.0);

}


int main()
{
    printf("%f",distance( 3 , 4 ,4 , 3));
    return 0;
}