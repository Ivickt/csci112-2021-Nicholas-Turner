#include <stdio.h>


//function to make arithmatic and to print
void add_num(double *a, double *b, double *c){
    
    //declaring variables
    double sum = 0;
    double ave = 0;

    double na = 0;
    double nb = 0;
    double nc = 0;

    na = *a;
    nb = *b;
    nc = *c;
    
    
    //computing functions
    sum = na + nb + nc;
    ave = (na + nb + nc) / 3;
    

    printf("sums = %.2f. ave= %.2f\n", sum, ave); 

}


int main(void){
    
    //declare variables
    double a = 0;
    double b = 0;
    double c = 0;
    
    //aask for 3 numbers
    printf("Enter a number>");
    scanf("%lf.\n", &a);
    
    
    printf("Enter a number>");
    scanf("%lf.\n", &b);
    
    
    printf("Enter a number>");
    scanf("%lf.\n", &c);
    add_num(&a, &b, &c);
    
return (0);
}




