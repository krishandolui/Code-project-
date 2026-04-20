#include<stdio.h>
#include<string.h>


void reverse( char *bin , int left , int right ){
    while ( left < right ){
        char temp = bin[left];
        bin[left] = bin[right];
        bin[right] = temp ;
        left++;
        right--;
    }
}

char* decToBinary( int n){
    int index = 0 ;
  
	char* bin = (char*) malloc(32 * sizeof(char));
  

    while ( n > 0 ){
        int bit = n % 2 ;
        bin[index++] = '0' + bit ;
        n /= 2 ;

    }
    bin[index] = '\0';

    reverse( bin , 0 , index - 1 );
    return bin ;
}

int main(){
    int n = 12 ;
    char* bin = decToBinary(n);

    printf("%s", bin);
    return 0;
}