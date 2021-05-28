#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define NUM_LINES 37
#define LINE_LENGTH 60

int compare(char hurr[NUM_LINES][LINE_LENGTH], FILE *outp);
int compare_quads(const void *a, const void *b);



int main (void){
//store each line in an array of strings
    FILE *inp;
    FILE *outp;
    char hurr[NUM_LINES][LINE_LENGTH];
    ;
    
    inp = fopen("hurricanes.csv","r");
    outp = fopen("out.txt","w");
        

//read in lines from file
    for (int i = 0; i<NUM_LINES; i++){
        fgets(hurr[i], LINE_LENGTH, inp);
    }
    inp = fopen("hurricanes.cvs","r");

    //printf("%s", hurr[0]);
//define function

     

        compare(hurr, outp);  


return (0);
}

int compare_quads( const void *a, const void *b) {
     //stores memory for the sorted array
     return memcmp (a, b, 4);

}

//using qsort to sort the 2d array from least to greatest only depending on the network address


int compare(char hurr[NUM_LINES][LINE_LENGTH], FILE *outp)   
{
    //sorts the network of size arg into the right slots
    qsort(hurr, NUM_LINES, sizeof(hurr[0]), compare_quads);

        //checking to see if the order is correct
    //    for (int k = 0; k< NUM_LINES; k++){
    //        printf("%s\n", hurr[k]);
    //        }
    //       printf("\n");


   char *name;
   char *cat = 0;
   char *date;
   char *a, *b, *c;

   //for loop to print results
   fprintf(outp,"Hurricanes in Florida alphabetized by name\n");
   fprintf(outp, "Name       Cat.  Date\n");
   for (int i = 0; i<NUM_LINES; i++){
        name = strtok(hurr[i], ",");
        a = strtok(NULL, " ");
        cat  = strtok(NULL, " ");
        b = strtok(NULL, ",");
        date = strtok(NULL, " ");
    fprintf(outp, "%-10s %-4s %s", name, cat, date);
    }
    
   // for( int i =0; i<NUM_LINES; i++){
   //     printf("%s", list[i]);
   // }


  for (int i =0; i<1; i++){
    *a =2;
    *b =3;
    *c = 3;

  }


return 0;
}
