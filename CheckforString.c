#include<stdio.h>
#include<string.h>
#include<stdbool.h>


bool areStringsSame( const char* s1 , const char* s2){
    return strcmp(s1 , s2) == 0;
}

int main()
{
    const char* s1 = "abc";
    const char* s2 = "abcd";


    if(areStringsSame(s1 , s2)){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}