//declare libraries
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//declare other functions/files to be used in the program
void org_fun(int arg, unsigned char networks[arg][4], 
            int *net_size_A, int *net_size_B,
            int *net_size_C, int *elemA, int *mostA,
            int *mostB, int *elemB, int *elemC,
            int *mostC, int *temp1, int *temp2);

int compare(int arg, unsigned char networks[arg][4]);

int compare_quads(const void *a, const void *b);

void print_fun( int arg, unsigned char networks[arg][4], int *elemC, int *temp2, int *mostC,
                int *elemB, int *temp1, int *mostB, int *elemA, int *mostA,
                int *net_size_A, int *net_size_B, int *net_size_C);

 

//read command line input and store the information
int main(int argc, char** argv){
    
    //declar variable
    int arg = 0;
   
    //make argv into an int
    arg = atoi(argv[1]);
    //assign size to networks
     unsigned char networks[arg][4];
       
    //assign input to networks
    for (int j =0; j<1; ++j){
        if(argc == 1)
             {
                printf("ERROR ERROR, you messed up\n");        
            }
 
        else
        {
        // hold network addresses in a 2-d array, with 4 unsigned char
            
            for(int k = 0; k<arg; k++){
                for (int i =0; i<4; i++){

                scanf("%hhu.", &networks[k][i]);
                //checks to see if scanf was working properly
               // printf(" %hhu",networks[k][i]);
            
            }
                //printf("\n");
            }}}
                    
    int net_size_A = 0;
    int net_size_B = 0;
    int net_size_C = 0;
    int elemA = 0;
    int mostA = 0;
    int mostB = 0;
    int elemB = 0;
    int elemC = 0;
    int mostC = 0;
    int temp1 = 0;
    int temp2 = 0;
    int a = 0;
    int b =0;


    //other funtions that need to be ran
    compare(arg, networks);  
    compare_quads(&a,&b);

     org_fun(arg, networks, 
            &net_size_A, &net_size_B,
            &net_size_C, &elemA, &mostA,
            &mostB, &elemB, &elemC,
            &mostC, &temp1, &temp2);

    print_fun(arg, networks, &elemC, &temp2, &mostC,
                &elemB, &temp1, &mostB, &elemA, &mostA,
                &net_size_A, &net_size_B, &net_size_C);

            //test to see if values travel properly across functions
            //printf("%d++", net_size_A);
   
return(0);
}

