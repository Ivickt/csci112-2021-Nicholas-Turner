#include <stdio.h>

int main(void){
//daclare variables
int num[20] = {[0 ... 19] = 0};
int sum = 0;

//for loop that repeats 20 times
for ( int i = 0; i<20; ++i){
    scanf("%d", &num[i]);
    //adds the input into sum
    sum = sum + num[i];
    
}
printf("sum is %d.\n", sum);



return(0);
}
