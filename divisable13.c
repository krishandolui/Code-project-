#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool divBy13(const char* s ){
    int num = atoi(s);


    return ( num % 13 == 0);
}


int main()
{
    const char* s = "2911285";

    bool isDivisable = divBy13(s);

    if ( isDivisable) 
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }

    return 0;
}