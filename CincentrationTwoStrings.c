#include<stdio.h>
#include<string.h>


void concat( const char* s1 , const char* s2 , char* res ){
    while(*s1){
        *res++ == *s1++;
    }

    while(*s2){
        *res++ = *s2++;
    }
    *res = '\0';
}

int main()
{
    const char* s1 = "Hello, ";
    const char* s2 = "World!";
    char res[100];

    concat(s1 , s2 , res);
    printf("%s\n", res);
    return 0;
}