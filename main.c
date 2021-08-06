/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>


int ubvfnPalindromo(char *);


int main()
{
    printf("%d\n",ubvfnPalindromo("anitalavalatina"));
    return 0;
}

int ubvfnPalindromo(char * _string){
    int ret_val;
    int palindromo;
    int i,j,k;

    printf("%s\n",_string);
    
    i=strlen(_string);
    i=i-1;
    
    for(j=0, k=i; j <= i/2; j++, k--){
      if(_string[j]==_string[k]){
        palindromo = 1;
      }else{
        palindromo = 0;
        break;
      }
    }

    
    if(palindromo){
        ret_val = 1;
    }else{""
        ret_val = 2;
    }
    return ret_val;
}