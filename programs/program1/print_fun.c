//declare libraries
#include <string.h>
#include <stdio.h>
#include <stdlib.h>  


void print_fun( int arg, unsigned char networks[arg][4], int *elemC, int *temp2, int *mostC,
                int *elemB, int *temp1, int *mostB, int *elemA, int *mostA,
                int *net_size_A, int *net_size_B, int *net_size_C){
            //checking to make sure my pointers work correctly
            //printf("please please please print");
            int anet_size_A = 0;
            int anet_size_B = 0;
            int anet_size_C = 0;
            int aelemA = 0;
            int amostA = 0;
            int amostB = 0;
            int aelemB = 0;
            int aelemC = 0;
            int amostC = 0;
            int atemp1 = 0;
            int atemp2 = 0;

            //uses pointers to access the elemnts inside the address
            anet_size_A = *net_size_A;
            anet_size_B = *net_size_B;
            anet_size_C = *net_size_C;
            aelemA = *elemA;
            amostA = *mostA;
            amostB = *mostB;
            aelemB = *elemB;
            aelemC = *elemC;
            amostC = *mostC;
            atemp1 = *temp1;
            atemp2 = *temp2;

       //printf("%d +++ %d\n", aelemB, networks[atemp1][1]); 
        //if no code repeats for A
     if(amostA == 1){
            
            printf("Class A has %d networks\n", anet_size_A); 
            printf("All a networks only have 1 host\n");
            printf("Class B has %d networks\n", anet_size_B); 
            printf("Largest B network is %d.%d with %d hosts\n", aelemB, networks[atemp1][1], amostB);
            printf("Class C has %d networks\n", anet_size_C); 
            printf("Largest C network is %d.%d.%d with %d hosts\n", aelemC, networks[atemp2][1], networks[atemp2][2], amostC);

    }
    //if no networks repeats for B
     if(amostB == 1){
            
            printf("Class A has %d networks\n", anet_size_A); 
            printf("Largest A network is %d with %d hosts\n", aelemA, amostA);
            printf("Class B has %d networks\n", anet_size_B); 
            printf("All B networks have only 1 host\n");
            printf("Class C has %d networks\n", anet_size_C); 
            printf("Largest C network is %d.%d.%d with %d hosts\n", aelemC, networks[atemp2][1], networks[atemp2][2], amostC);

    }
    //if no networks repeats for C
   if (amostC == 1){
            
            printf("Class A has %d networks\n", anet_size_A); 
            printf("Largest A network is %d with %d hosts\n", aelemA, amostA);
            printf("Class B has %d networks\n", anet_size_B); 
            printf("Largest B network is %d.%d with %d hosts\n", aelemB, networks[atemp1][1], amostB);
            printf("Class C has %d networks\n", anet_size_C); 
            printf("All C networks have only 1 host\n");

    }


    //for any other situtation
    else{
            
            printf("Class A has %d networks\n", anet_size_A); 
            printf("Largest A network is %d with %d hosts\n", aelemA, amostA);
            printf("Class B has %d networks\n", anet_size_B); 
            printf("Largest B network is %d.%d with %d hosts\n", aelemB, networks[atemp1][1], amostB);
            printf("Class C has %d networks\n", anet_size_C); 
            printf("Largest C network is %d.%d.%d with %d hosts\n", aelemC, networks[atemp2][1], networks[atemp2][2], amostC);

    }


}

