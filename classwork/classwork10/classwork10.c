#include <stdio.h>
#include <string.h>

//user defined types
typedef enum {
    january,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    septmeber,
    october,
    november,    december
} months_t;


int main(void){

    

    //declare variables
    
    int temp;

    printf("Please enter an integer from 0-11> ");
    scanf("%d", &temp);

    

    switch (temp){
        case january:
            printf("The month is January.\n");
            break;
        case (february):
            printf("The month is February.\n");
            break;
        case (march):
            printf("The month is March.\n");
            break;
        case (april):
            printf("The month is April.\n");
            break;
        case (may):
            printf("The month is May.\n");
            break;
        case (june):
            printf("The month is June.\n");
            break;
        case (july):
            printf("The month is July.\n");
            break;
        case (august):
            printf("The month is August.\n");
            break;
        case (septmeber):
            printf("The month is September.\n");
            break;
        case (october):
            printf("The month is October.\n");
            break;
        case (november):
            printf("The month is November.\n");
            break;
        case (december):
            printf("The month is December.\n");
            break;











    }

return 0;
}
