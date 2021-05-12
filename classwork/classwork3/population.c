#include <stdio.h>
    int main(void){
        //declare variables
        int Years;
        int Years_after;
        double get_population;
        //print enter years
        printf("Enter a year after 1990>");
        
        //scan and save answer
        scanf("%d", &Years);

        //Years after eq.
        Years_after = Years - 1990;

        //plug answer into equation
        get_population = 52.966 + 2.184 * Years_after;
        
        //print predicted gotham population
        printf("Predicted Gotham City population for %d (in thousands):\n%.3f \n", Years, get_population);

        





    return(0);
    }
