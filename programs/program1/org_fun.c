//declare libraries
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//function is to sort each network function into a category, count how many are in each, count the most repeated and how many times they are repeated
void org_fun(int arg, unsigned char networks[arg][4], 
            int *net_size_A,
            int *net_size_B,
            int *net_size_C,
            int *elemA,
            int *mostA,
            int *mostB,
            int *elemB,
            int *elemC,
            int *mostC,
            int *temp1,
            int *temp2){


   
//my massive amount of declarations
    int tempA = 0;
    size_t countA;
    int tempB = 0;
    size_t countB;
    int tempC = 0;
    size_t countC;
    int temp2B = 0;
    int temp2C = 0;
    int temp3C = 0;

//to make pointers function properly
    



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




   //how many of each network is in each category( only depends on the first network number)
   
        // checks how many networks are in A    
        for (int k = 0; k < arg; k++){
            if      (networks[k][0]        <= 127){
                if (networks[k][0] != networks[k+1][0]){
                    anet_size_A++;       
                }
            
            }
        }

        //checks how many networks are in B
        for (int k = 0; k < arg; k++){ 
            if (128 <= networks[k][0] && networks[k][0] <= 191){
                if (networks[k][0] == networks[k+1][0] 
                &&  networks[k][1] == networks[k+1][1]){
                    }
                else if(networks[k][0] != networks[k+1][0]){
                anet_size_B++;
                }
                else{
                anet_size_B++;
                }
                
               }
            }
        //checks how many networks in C
        for (int k = 0; k < arg; k++){ 
             if (192 <= networks[k][0] && networks[k][0] <= 223){
                   if    (networks[k][0] != networks[k+1][0]){ 
                        anet_size_C++;
                    }
                    else if (networks[k][0] == networks[k+1][0] 
                         &&  networks[k][1] != networks[k+1][1]){
                        anet_size_C++;
                    }
                    else if (networks[k][0] == networks[k+1][0] 
                         &&  networks[k][1] == networks[k+1][1]
                         &&  networks[k][2] != networks[k+1][2]){
                        anet_size_C++;

                    }
            }
        }

            *net_size_A =anet_size_A;
            *net_size_B =anet_size_B;
            *net_size_C =anet_size_C;

        
        

//this group of code is checking the size of and the most repeated networks.

        
        //checking to see which A network is most repeated and counting how many there are

                for (int k = 0; k < arg; k++){
                    tempA = networks[k][0];
                    countA = 1;
                for (int i = k+1; i<arg; i++){
                    if (networks[i][0] == tempA){
                        countA++;
                    }
                }
                if (amostA <= countA && networks[k][0] <= 127){
                    amostA = countA;
                    aelemA = networks[k][0];
                
                }
                *mostA = amostA;
                *elemA = aelemA;
                }
            
        
        //checks to see if its working
        //printf("elem %d. most %d\n", elemA, mostA);
        

         
        //checking to see which B network is most repeated and counting how many there are
        for (int k = 0; k < arg; k++){
            tempB = networks[k][0];
            temp2B = networks[k][1];
            countB = 1;
            for (int i = k+1; i<arg; i++){
                if (networks[i][0] == tempB && networks[i][1] == temp2B){
                    countB++;
                }
            }
            if (amostB <= countB && networks[k][0] >= 128 && networks[k][0] <= 191){
                amostB = countB;
                aelemB = networks[k][0];
                atemp1 = k;
            }
            *mostB = amostB;
            *elemB = aelemB;
            *temp1 = atemp1;
        
        



}
        //printf("%d", networks[atemp1][0]);
        //checks to see if its working
        //printf("elem %d.%d, most %d\n", elemB, networks[temp1][1], mostB);
        
        
        //checking to see which C network is most repeated and counting how many there are
        for (int k = 0; k < arg; k++){
            tempC = networks[k][0];
            temp2C = networks[k][1];
            temp3C = networks[k][2];
            countC = 1;
            for (int i = k+1; i<arg; i++){
                if (networks[i][0] == tempC && networks[i][1] == temp2C && networks[i][2] == temp3C){
                    countC++;
                }
            }
            if (amostC <= countC && networks[k][0] >= 192 && networks[k][0] <= 223){
                amostC = countC;
                aelemC = networks[k][0];
                atemp2 = k;
            }
            *mostC = amostC;
            *elemC = aelemC;
            *temp2 = atemp2;
            
       }
        //checks to see if function is working
        //printf("elem %d.%hhu.%hhu most %d\n", aelemC, networks[atemp2][1], networks[atemp2][2], amostC);

        //printf("%d\n", anet_size_A);
}
 
