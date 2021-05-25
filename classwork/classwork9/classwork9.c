#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //declare var
    char str[20];
    char cpy[2];
    
    //print and scan statments 
    printf("Enter a word> ");
    gets(str);
    strncpy(cpy, str, 1);
    
    //print statements
    printf("%s starts with the letter %s\n", str, cpy);



return(0);
}
