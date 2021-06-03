// c #include <stdio.h>  //includes stdio libraries

// cint main(void){      //main function
        
        //defined variables
// c        double a; 
// c        double b;
// c        double Miles_Travelled;
// c        double Reim;
// c        double s = .35;

// c        printf("MILEAGE REIMBURSEMENT CALCULATOR\n");     //prints statement
        
// c        printf("Enter beginning odometer reading=>");   //prints statement
// c        scanf("%lf" , &a);                              //scans for double places in a
        
// c        printf("Enter ending odometer reading=>");      //prints statement
// c        scanf("%lf", &b);                               //scans for double in place of b

// c        Miles_Travelled = b - a;                        //equation to find miles travelled
// c        Reim = s * Miles_Travelled;                     //equation to find reimbursment

// c        printf("You travelled %.2f miles. At $0.35 per mile, Your reimbursement is %.2f \n" ,Miles_Travelled, Reim); 
                                                        //prints final statement, with data1 being replaced by miles traveled and                                                           data2 replaced by reimbursement

// c        printf("Thank you for the extra time on this assignment, yesterday was crazy \n");

// creturn(0);
// c}
//
//
// C++
#include <iostream>
using namespace std;


int main(void){

        double a; 
        double b;
        double Miles_Travelled;
        double Reim;
        double s = .35;

        cout << "Milage Reimbursement Calculator" << '\n';
        cout << "Enter beginning odometer reading>";
        cin >> a;
        cout << " Enter ending odometer readins>";
        cin >> b;

        Miles_Travelled = b -a;
        Reim = s * Miles_Travelled;

        cout <<"You travelled " << Miles_Travelled << " miles. At $0.35 per mile, Your reimbursement is $" << Reim << '\n';
 


return(0);
}
