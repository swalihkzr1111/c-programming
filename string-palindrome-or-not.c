/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i,len,output;
    printf("enter your string");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
        output=1;
        break;
        }
    } if (output==0){
        printf("%s is palindrome",str);
    } else {
        printf("%s is not a palindrome",str);
    }

    return 0;
}
