
#include <stdio.h>


int count(char *str);

int main(void) {
    char str[20]; 
    int my_count; 
    
    //get input
    printf("Enter a word of up to 20 characters\n");
    gets(str);
 
    //use recursion funciont and print
    my_count = count(str);
    printf("The Length is %d\n", my_count);

    return (0);

}

int count(char *str) {
    int ans;
    // base case.
    if (str[0] == '\0') {
        ans = 0;
    // recursive case: counts till out of letters
        } else {
   
            ans = 1 + count(&str[1]);
        }

    return ans;
}
