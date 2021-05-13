//the reason why in the military question it can accept longer strings of charaacters as long as the begin with y, Y, n ,N
//is becuase the %c recordes the whole string of letters and the Case only checks for the first letter.


#include <stdio.h>
//functions prototypes
void compute_discount(void);
int print_results(void);


//defined Gloabal var
double Mdisc;
double Cost_of_purchase;
double DiscTot;
double Sales_tax;
double Total_price;
char military;

int main (void) {
    //declare variables

    //Cost of purchase
    printf("Cost of purchase?\t\t$");
    scanf ("%lf",&Cost_of_purchase);
    
    //Military?
    printf("In military (y or n)?\t\t");
    scanf(" %c" ,&military);
    
    //calling for functions
    compute_discount();
    print_results();

}


//function to compute discount
void compute_discount(void){  

    //compute military discount
    switch(military){
    case 'y':
    case 'Y':
        if(Cost_of_purchase > 150) {
            Mdisc = .15 * Cost_of_purchase;
        } else if (Cost_of_purchase < 150) {
            Mdisc = .10 * Cost_of_purchase;
        }
        break;
    case 'n':
    case 'N':
        Mdisc = 0;
        break;
    default:
        printf("Error: bad input\n");
}

    //cost minus military discount
    DiscTot = Cost_of_purchase - Mdisc;
    //sales tax
    Sales_tax = .05 * DiscTot;
    //Total Calculated
    Total_price = DiscTot + Sales_tax;

}

//function to print results
int print_results(void){

    //if input is y Y then use below, this is not dependant on if military only if the letter is accepted
    switch(military){
    case 'y':
    case 'Y':
        printf("Military discount (15%%): \t$%.2f\n", Mdisc);
        printf("Discounted total: \t\t$%.2f\n", DiscTot);
        printf("Sales tax (5%%): \t\t$%.2f\n", Sales_tax);
        printf("Total: \t\t\t\t$%.2f\n", Total_price);
        break;
    //less information is given when n or N is used
    case 'n':
    case 'N':
        printf("Sales tax (5%%): \t\t$%.2f\n", Sales_tax);
        printf("Total: \t\t\t\t$%.2f\n", Total_price);
        break;
}
return(0);
}
