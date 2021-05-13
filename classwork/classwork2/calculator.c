#include <stdio.h>  //includes stdio libraries

int main(void){      //main function
        
        //defined variables
        double a; 
        double b;
        double Miles_Travelled;
        double Reim;
        double s = .35;

        printf("MILEAGE REIMBURSEMENT CALCULATOR\n");     //prints statement
        
        printf("Enter beginning odometer reading=>");   //prints statement
        scanf("%lf" , &a);                              //scans for double places in a
        
        printf("Enter ending odometer reading=>");      //prints statement
        scanf("%lf", &b);                               //scans for double in place of b

        Miles_Travelled = b - a;                        //equation to find miles travelled
        Reim = s * Miles_Travelled;                     //equation to find reimbursment

        printf("You travelled %.2f miles. At $0.35 per mile, Your reimbursement is %.2f \n" ,Miles_Travelled, Reim); 
                                                        //prints final statement, with data1 being replaced by miles traveled and                                                           data2 replaced by reimbursement

        printf("Thank you for the extra time on this assignment, yesterday was crazy \n");

return(0);
}
