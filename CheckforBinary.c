#include<stdio.h>
#include<string.h>
#include<stdbool.h>



bool isBinary( char *s){
    for( int i = 0 ; i < strlen(s) ; i++){
        if( s[i] != '0' && s[i] != '1'){
            return false ;
        }
    }
    return true ; 
}

int main()
{
    char s[] = "01010101010101";
    printf(isBinary(s) ? "true" : "false");
    return 0;
}