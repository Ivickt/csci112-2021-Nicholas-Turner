//program that process a colletion of daily high temps.
//
//has to count and print the number of hot days (temp of 85 or higher), number of pleasant (60-80) and #of cold days (sub 60) then print average temp.
//use will only input integers
//
//
//use a switch case for majority of program
//  add a case with -99 exiting
//


#include <stdio.h>

int main(void){
//declare variables
int arr;
double total;
int total_ave;
double ave;
int NHday=0;
int NPday=0;
int NCday=0;


//ask input store into num, then decides if the number goes into which array


    do{
            printf("Enter a high temp reading (-99 to quit)> ");
            scanf ("%d", &arr);
                
                if(arr == -99)
                {
                    break;
                }
                

                else if(arr<60 && arr>=0){
                        NCday++;
                      }
                else if(arr>=60 && arr<=84){
                        NPday++;
                        }
                else {
                        NHday++;
                    }
                total_ave += arr;
            }
while(arr >=0);

//calculating the average
total = NHday+NPday+NCday;
ave = total_ave / total;
    
//printing the final statement once all the values are calculated
    printf("\nHot days:\t %d\n", NHday);
    printf("Pleasant days:\t %d\n", NPday);
    printf("Cold days:\t %d\n\n", NCday);
    
    printf("The average temperature was %.2f degrees.\n", ave);




//stops compiling when -99 is entered not collected as information
//
//
return(0);
}
