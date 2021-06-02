#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CSIZE 150
#define t 30

//declare other functions
void store(FILE *inp);
void seperate(void);
void print(void);



//defining the struct
struct class
{
    char joyC[CSIZE];
    char progC[CSIZE];
    char joyD[CSIZE];
    char bsc[CSIZE];
    char soc[CSIZE];
    char data[CSIZE];
    char disc[CSIZE];
    char conc[CSIZE];
    char cst[CSIZE];
    char mini[CSIZE];
    char csys[CSIZE];
    char cgra[CSIZE];
    char ai[CSIZE];
    char embe[CSIZE];
    char comp[CSIZE];
    //couldn't figure out how to use a for loop to make this part of the code much shorter
    char num1[t];
    char name1[t];
    char cnum1[t];
    char teach1[t];
    char day1[t];
    char time1[t];

    char num2[t];
    char name2[t];
    char cnum2[t];
    char teach2[t];
    char day2[t];
    char time2[t];

    char num3[t];
    char name3[t];
    char cnum3[t];
    char teach3[t];
    char day3[t];
    char time3[t];

    char num4[t];
    char name4[t];
    char cnum4[t];
    char teach4[t];
    char day4[t];
    char time4[t];

    char num5[t];
    char name5[t];
    char cnum5[t];
    char teach5[t];
    char day5[t];
    char time5[t];

    char num6[t];
    char name6[t];
    char cnum6[t];
    char teach6[t];
    char day6[t];
    char time6[t];

    char num7[t];
    char name7[t];
    char cnum7[t];
    char teach7[t];
    char day7[t];
    char time7[t];

    char num8[t];
    char name8[t];
    char cnum8[t];
    char teach8[t];
    char day8[t];
    char time8[t];

    char num9[t];
    char name9[t];
    char cnum9[t];
    char teach9[t];
    char day9[t];
    char time9[t];

    char num10[t];
    char name10[t];
    char cnum10[t];
    char teach10[t];
    char day10[t];
    char time10[t];

    char num15[t];
    char name15[t];
    char cnum15[t];
    char teach15[t];
    char day15[t];
    char time15[t];

    char num11[t];
    char name11[t];
    char cnum11[t];
    char teach11[t];
    char day11[t];
    char time11[t];

    char num12[t];
    char name12[t];
    char cnum12[t];
    char teach12[t];
    char day12[t];
    char time12[t];

    char num13[t];
    char name13[t];
    char cnum13[t];
    char teach13[t];
    char day13[t];
    char time13[t];

    char num14[t];
    char name14[t];
    char cnum14[t];
    char teach14[t];
    char day14[t];
    char time14[t];


};
struct class c;


//seperate info
//print info

int main(void){
    //call for FILES and assign them a pointer
    FILE *inp;
    inp = fopen("classes.csv","r");
    

    //call for other functions
    store(inp);
    seperate();
    print();

return(0);
}

void store(FILE *inp){       
     //store information in the file to the struct
    fgets(c.joyC, CSIZE, inp);
    fgets(c.progC, CSIZE, inp);
    fgets(c.joyD, CSIZE, inp);
    fgets(c.bsc, CSIZE, inp);
    fgets(c.soc, CSIZE, inp);
    fgets(c.data, CSIZE, inp);
    fgets(c.disc, CSIZE, inp);
    fgets(c.conc, CSIZE, inp);
    fgets(c.cst, CSIZE, inp);
    fgets(c.mini, CSIZE, inp);
    fgets(c.csys, CSIZE, inp);
    fgets(c.cgra, CSIZE, inp);
    fgets(c.ai, CSIZE, inp);
    fgets(c.embe, CSIZE, inp);
    fgets(c.comp, CSIZE, inp);
    //printf("%s", c.comp);
   
    }


void seperate(void){
    
    //declare a milllion variables
   char *num1 = c.num1;
   char *name1 = c.name1;
   char *cnum1 = c.cnum1;
   char *teach1 = c.teach1;
   char *day1 = c.day1;
   char *time1 = c.time1;

   char *num2 = c.num2;
   char *name2 = c.name2;
   char *cnum2 = c.cnum2;
   char *teach2 = c.teach2;
   char *day2 = c.day2;
   char *time2 = c.time2;

   char *num3 = c.num3;
   char *name3 = c.name3;
   char *cnum3 = c.cnum3;
   char *teach3 = c.teach3;
   char *day3 = c.day3;
   char *time3 = c.time3;

   char *num4 = c.num4;
   char *name4 = c.name4;
   char *cnum4 = c.cnum4;
   char *teach4 = c.teach4;
   char *day4 = c.day4;
   char *time4 = c.time4;

   char *num5 = c.num5;
   char *name5 = c.name5;
   char *cnum5 = c.cnum5;
   char *teach5 = c.teach5;
   char *day5 = c.day5;
   char *time5 = c.time5;

   char *num6 = c.num6;
   char *name6 = c.name6;
   char *cnum6 = c.cnum6;
   char *teach6 = c.teach6;
   char *day6 = c.day6;
   char *time6 = c.time6;

   char *num7 = c.num7;
   char *name7 = c.name7;
   char *cnum7 = c.cnum7;
   char *teach7 = c.teach7;
   char *day7 = c.day7;
   char *time7 = c.time7;

   char *num8 = c.num8;
   char *name8 = c.name8;
   char *cnum8 = c.cnum8;
   char *teach8 = c.teach8;
   char *day8 = c.day8;
   char *time8 = c.time8;

   char *num9 = c.num9;
   char *name9 = c.name9;
   char *cnum9 = c.cnum9;
   char *teach9 = c.teach9;
   char *day9 = c.day9;
   char *time9 = c.time9;

   char *num10 = c.num10;
   char *name10 = c.name10;
   char *cnum10 = c.cnum10;
   char *teach10 = c.teach10;
   char *day10 = c.day10;
   char *time10 = c.time10;

   char *num11 = c.num11;
   char *name11 = c.name11;
   char *cnum11 = c.cnum11;
   char *teach11 = c.teach11;
   char *day11 = c.day11;
   char *time11 = c.time11;

   char *num12 = c.num12;
   char *name12 = c.name12;
   char *cnum12 = c.cnum12;
   char *teach12 = c.teach12;
   char *day12 = c.day12;
   char *time12 = c.time12;

   char *num13 = c.num13;
   char *name13 = c.name13;
   char *cnum13 = c.cnum13;
   char *teach13 = c.teach13;
   char *day13 = c.day13;
   char *time13 = c.time13;

   char *num14 = c.num14;
   char *name14 = c.name14;
   char *cnum14 = c.cnum14;
   char *teach14 = c.teach14;
   char *day14 = c.day14;
   char *time14 = c.time14;

   char *num15 = c.num15;
   char *name15 = c.name15;
   char *cnum15 = c.cnum15;
   char *teach15 = c.teach15;
   char *day15 = c.day15;
   char *time15 = c.time15;


    //saves the class number
    num1 = strtok(c.joyC, ",");
    //saves the name of the class
    name1 = strtok(NULL, ",");
    //stores the class number
    cnum1 = strtok(NULL, "P");
    //stores the teachers name
    teach1 = strtok(NULL, ",");
    //stores the days when the class is
    day1 = strtok(NULL, " ");
    //stores the time of the class
    time1 = strtok(NULL, " ");
    //copy the strings back into the struct    
    strcpy(c.num1, num1);
    strcpy(c.name1,name1);
    strcpy(c.cnum1, cnum1);
    strcpy(c.teach1, teach1);
    strcpy(c.day1, day1);
    strcpy(c.time1, time1);

    num2 = strtok(c.progC, ",");
    name2 = strtok(NULL, ",");
    cnum2 = strtok(NULL, "C");
    teach2 = strtok(NULL, ",");
    day2 = strtok(NULL, " ");
    time2 = strtok(NULL, " ");
    strcpy(c.num2, num2);
    strcpy(c.name2,name2);
    strcpy(c.cnum2, cnum2);
    strcpy(c.teach2, teach2);
    strcpy(c.day2, day2);
    strcpy(c.time2, time2);



 num3 = strtok(c.joyD, ",");
    name3 = strtok(NULL, ",");
    cnum3 = strtok(NULL, "D");
    teach3 = strtok(NULL, ",");
    day3 = strtok(NULL, " ");
    time3 = strtok(NULL, " ");
     strcpy(c.num3, num3);
    strcpy(c.name3,name3);
    strcpy(c.cnum3, cnum3);
    strcpy(c.teach3, teach3);
    strcpy(c.day3, day3);
    strcpy(c.time3, time3);

   
 num4 = strtok(c.bsc, ",");
    name4 = strtok(NULL, ",");
    cnum4 = strtok(NULL, "D");
    teach4 = strtok(NULL, ",");
    day4 = strtok(NULL, " ");
    time4 = strtok(NULL, " ");
      strcpy(c.num4, num4);
    strcpy(c.name4,name4);
    strcpy(c.cnum4, cnum4);
    strcpy(c.teach4, teach4);
    strcpy(c.day4, day4);
    strcpy(c.time4, time4);

  
 num5 = strtok(c.soc, ",");
    name5 = strtok(NULL, ",");
    cnum5 = strtok(NULL, "C");
    teach5 = strtok(NULL, ",");
    day5 = strtok(NULL, " ");
    time5 = strtok(NULL, " ");
       strcpy(c.num5, num5);
    strcpy(c.name5,name5);
    strcpy(c.cnum5, cnum5);
    strcpy(c.teach5, teach5);
    strcpy(c.day5, day5);
    strcpy(c.time5, time5);

 
 num6 = strtok(c.data, ",");
    name6 = strtok(NULL, ",");
    cnum6 = strtok(NULL, "L");
    teach6 = strtok(NULL, ",");
    day6 = strtok(NULL, " ");
    time6 = strtok(NULL, " ");
      strcpy(c.num6, num6);
    strcpy(c.name6,name6);
    strcpy(c.cnum6, cnum6);
    strcpy(c.teach6, teach6);
    strcpy(c.day6, day6);
    strcpy(c.time6, time6);


  num7 = strtok(c.disc, ",");
    name7 = strtok(NULL, ",");
    cnum7 = strtok(NULL, "Z");
    teach7 = strtok(NULL, ",");
    day7 = strtok(NULL, " ");
    time7 = strtok(NULL, " ");
      strcpy(c.num7, num7);
    strcpy(c.name7,name7);
    strcpy(c.cnum7, cnum7);
    strcpy(c.teach7, teach7);
    strcpy(c.day7, day7);
    strcpy(c.time7, time7);


  num8 = strtok(c.conc, ",");
    name8 = strtok(NULL, ",");
    cnum8 = strtok(NULL, "L");
    teach8 = strtok(NULL, ",");
    day8 = strtok(NULL, " ");
    time8 = strtok(NULL, " ");
      strcpy(c.num8, num8);
    strcpy(c.name8,name8);
    strcpy(c.cnum8, cnum8);
    strcpy(c.teach8, teach8);
    strcpy(c.day8, day8);
    strcpy(c.time8, time8);


  num9 = strtok(c.cst, ",");
    name9 = strtok(NULL, ",");
    cnum9= strtok(NULL, "Z");
    teach9 = strtok(NULL, ",");
    day9 = strtok(NULL, " ");
    time9 = strtok(NULL, " ");
       strcpy(c.num9, num9);
    strcpy(c.name9,name9);
    strcpy(c.cnum9, cnum9);
    strcpy(c.teach9, teach9);
    strcpy(c.day9, day9);
    strcpy(c.time9, time9);

 
num10 = strtok(c.mini, ",");
    name10 = strtok(NULL, ",");
    cnum10 = strtok(NULL, "N");
    teach10 = strtok(NULL, ",");
    day10 = strtok(NULL, " ");
    time10 = strtok(NULL, " ");
    strcpy(c.num10, num10);
    strcpy(c.name10,name10);
    strcpy(c.cnum10, cnum10);
    strcpy(c.teach10, teach10);
    strcpy(c.day10, day10);
    strcpy(c.time10, time10);


num11 = strtok(c.csys, ",");
    name11 = strtok(NULL, ",");
    cnum11 = strtok(NULL, "W");
    teach11 = strtok(NULL, ",");
    day11 = strtok(NULL, " ");
    time11 = strtok(NULL, " ");
    strcpy(c.num11, num11);
    strcpy(c.name11,name11);
    strcpy(c.cnum11, cnum11);
    strcpy(c.teach11, teach11);
    strcpy(c.day11, day11);
    strcpy(c.time11, time11);


num12 = strtok(c.cgra, ",");
    name12 = strtok(NULL, ",");
    cnum12= strtok(NULL, "M");
    teach12 = strtok(NULL, ",");
    day12 = strtok(NULL, " ");
    time12 = strtok(NULL, " ");
    strcpy(c.num12, num12);
    strcpy(c.name12,name12);
    strcpy(c.cnum12, cnum12);
    strcpy(c.teach12, teach12);
    strcpy(c.day12, day12);
    strcpy(c.time12, time12);


num13 = strtok(c.ai, ",");
    name13 = strtok(NULL, ",");
    cnum13 = strtok(NULL, "S");
    teach13 = strtok(NULL, ",");
    day13 = strtok(NULL, " ");
    time13 = strtok(NULL, " ");
    strcpy(c.num13, num13);
    strcpy(c.name13,name13);
    strcpy(c.cnum13, cnum13);
    strcpy(c.teach13, teach13);
    strcpy(c.day13, day13);
    strcpy(c.time13, time13);


num14 = strtok(c.embe, ",");
    name14 = strtok(NULL, ",");
    cnum14 = strtok(NULL, "L");
    teach14 = strtok(NULL, ",");
    day14 = strtok(NULL, " ");
    time14 = strtok(NULL, " ");
    strcpy(c.num14, num14);
    strcpy(c.name14,name14);
    strcpy(c.cnum14, cnum14);
    strcpy(c.teach14, teach14);
    strcpy(c.day14, day14);
    strcpy(c.time14, time14);


num15 = strtok(c.comp, ",");
    name15 = strtok(NULL, ",");
    cnum15 = strtok(NULL, "K");
    teach15 = strtok(NULL, ",");
    day15 = strtok(NULL, " ");
    time15 = strtok(NULL, " ");
    strcpy(c.num15, num15);
    strcpy(c.name15,name15);
    strcpy(c.cnum15, cnum15);
    strcpy(c.teach15, teach15);
    strcpy(c.day15, day15);
    strcpy(c.time15, time15);

   //printf("==%s==", name15);
}

void print (void){

    //declaring a million variables
   char *num1 = c.num1;
   char *name1 = c.name1;
   char *cnum1 = c.cnum1;
   char *teach1 = c.teach1;
   char *day1 = c.day1;
   char *time1 = c.time1;

   char *num2 = c.num2;
   char *name2 = c.name2;
   char *cnum2 = c.cnum2;
   char *teach2 = c.teach2;
   char *day2 = c.day2;
   char *time2 = c.time2;

   char *num3 = c.num3;
   char *name3 = c.name3;
   char *cnum3 = c.cnum3;
   char *teach3 = c.teach3;
   char *day3 = c.day3;
   char *time3 = c.time3;

   char *num4 = c.num4;
   char *name4 = c.name4;
   char *cnum4 = c.cnum4;
   char *teach4 = c.teach4;
   char *day4 = c.day4;
   char *time4 = c.time4;

   char *num5 = c.num5;
   char *name5 = c.name5;
   char *cnum5 = c.cnum5;
   char *teach5 = c.teach5;
   char *day5 = c.day5;
   char *time5 = c.time5;

   char *num6 = c.num6;
   char *name6 = c.name6;
   char *cnum6 = c.cnum6;
   char *teach6 = c.teach6;
   char *day6 = c.day6;
   char *time6 = c.time6;

   char *num7 = c.num7;
   char *name7 = c.name7;
   char *cnum7 = c.cnum7;
   char *teach7 = c.teach7;
   char *day7 = c.day7;
   char *time7 = c.time7;

   char *num8 = c.num8;
   char *name8 = c.name8;
   char *cnum8 = c.cnum8;
   char *teach8 = c.teach8;
   char *day8 = c.day8;
   char *time8 = c.time8;

   char *num9 = c.num9;
   char *name9 = c.name9;
   char *cnum9 = c.cnum9;
   char *teach9 = c.teach9;
   char *day9 = c.day9;
   char *time9 = c.time9;

   char *num10 = c.num10;
   char *name10 = c.name10;
   char *cnum10 = c.cnum10;
   char *teach10 = c.teach10;
   char *day10 = c.day10;
   char *time10 = c.time10;

   char *num11 = c.num11;
   char *name11 = c.name11;
   char *cnum11 = c.cnum11;
   char *teach11 = c.teach11;
   char *day11 = c.day11;
   char *time11 = c.time11;

   char *num12 = c.num12;
   char *name12 = c.name12;
   char *cnum12 = c.cnum12;
   char *teach12 = c.teach12;
   char *day12 = c.day12;
   char *time12 = c.time12;

   char *num13 = c.num13;
   char *name13 = c.name13;
   char *cnum13 = c.cnum13;
   char *teach13 = c.teach13;
   char *day13 = c.day13;
   char *time13 = c.time13;

   char *num14 = c.num14;
   char *name14 = c.name14;
   char *cnum14 = c.cnum14;
   char *teach14 = c.teach14;
   char *day14 = c.day14;
   char *time14 = c.time14;

   char *num15 = c.num15;
   char *name15 = c.name15;
   char *cnum15 = c.cnum15;
   char *teach15 = c.teach15;
   char *day15 = c.day15;
   char *time15 = c.time15;

    //variable declarations
    int choice;
    
    
    
    char *temp1;
    char *temp2;
    char *temp3;
    char *temp4;
    char *temp5;
    char *temp6;
    char *temp7;
    char *temp8;
    char *temp9;
    char *temp10;
    char *temp11;
    char *temp12;
    char *temp13;
    char *temp14;
    char *temp15;
    char *a;
    char *cid = NULL;
    //printf("%s+%s+%s+%s+%s+%s+\n++++++", num1, name1, cnum1, teach1, day1, time1);
    do{
    //prints list of options to choose from
    printf("Choices:\n1 - Print all available classes\n2 - print class given course id\n3 - print all classes given day of week combo\n4 - print all classes under certain # of seats\n5 - prints all classes you would be interested in taking if you want a CS degree\n6 -quit\n");
    //the process of printing all of the statements starts here
    //they will be sorted by an if else statement and then the results will print and scan depending on the users choice

        scanf("%d", &choice);
        if (choice == 6){
            printf("You exited the program\n");
        }
        else if (choice == 1){
                //to find the number of chairs in a class
                a = strtok(cnum1, ",");
                temp1 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name1, num1, teach1, temp1, day1, time1);
                a = strtok(cnum2, ",");
                temp2 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name2, num2, teach2, temp2, day2, time2);
                a = strtok(cnum3, ",");
                temp3 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name3, num3, teach3, temp3, day3, time3);
                a = strtok(cnum4, ",");
                temp4 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name4, num4, teach4, temp4, day4, time4);
                a = strtok(cnum5, ",");
                temp5 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name5, num5, teach5, temp5, day5, time5);
                a = strtok(cnum6, ",");
                temp6 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name6, num6, teach6, temp6, day6, time6);
                a = strtok(cnum7, ",");
                temp7 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name7, num7, teach7, temp7, day7, time7);
                a = strtok(cnum8, ",");
                temp8 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name8, num8, teach8, temp8, day8, time8);
                a = strtok(cnum9, ",");
                temp9 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name9, num9, teach9, temp9, day9, time9);
                a = strtok(cnum10, ",");
                temp10 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name10, num10, teach10, temp10, day10, time10);
                a = strtok(cnum11, ",");
                temp11 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name11, num11, teach11, temp11, day11, time11);
                a = strtok(cnum12, ",");
                temp12 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name12, num12, teach12, temp12, day12, time12);
                a = strtok(cnum13, ",");
                temp13 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name13, num13, teach13, temp13, day13, time13);
                a = strtok(cnum14, ",");
                temp14 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name14, num14, teach14, temp14, day14, time14);
                a = strtok(cnum15, ",");
                temp15 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name15, num15, teach15, temp15, day15, time15);
        }
    else if (choice == 2){
            //char *b = NULL;
            //char *nume1;
            char *dump = NULL;
            //strcpy(b[20],num1);
            //a = strtok(b[20], " ");
            //printf("%s", a);
            //rando = strtok(NULL, " ");
            //printf("++%s++", rando);
            

            printf("Enter class id number:");
            scanf("%s %s", dump, cid);
            //a = strtok(b, " ");
            //cid = strtok(NULL, ""); 
            
            //nume1 = strtok(c.num1, " ");
            //nume1 = strtok(NULL, "");


            if(cid == num1){    
                a = strtok(cnum1, ",");
                temp1 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name1, num1, teach1, temp1, day1, time1);
             }
             else if(cid == num2){
                 a = strtok(cnum2, ",");
                temp2 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name2, num2, teach2, temp2, day2, time2);
             }
             else if(cid == num3){
                 a = strtok(cnum3, ",");
                temp3 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name3, num3, teach3, temp3, day3, time3);
             }
             else if(cid == num4){
                 a = strtok(cnum4, ",");
                temp4 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name4, num4, teach4, temp4, day4, time4);
             }
             else if(cid == num5){
                 a = strtok(cnum5, ",");
                temp5 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name5, num5, teach5, temp5, day5, time5);
             }
             else if(cid == num6){
                 a = strtok(cnum6, ",");
                temp6 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name6, num6, teach6, temp6, day6, time6);
             }
             else if(cid == num7){
                 a = strtok(cnum7, ",");
                temp7 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name7, num7, teach7, temp7, day7, time7);
             }
             else if(cid == num8){
                 a = strtok(cnum8, ",");
                temp8 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name8, num8, teach8, temp8, day8, time8);
             }
             else if(cid == num9){
                 a = strtok(cnum9, ",");
                temp9 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name9, num9, teach9, temp9, day9, time9);
             }
             else if(cid == num10){
                 a = strtok(cnum10, ",");
                temp10 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name10, num10, teach10, temp10, day10, time10);
             }
             else if(cid == num11){
                 a = strtok(cnum11, ",");
                temp11 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name11, num11, teach11, temp11, day11, time11);
             }
             else if(cid == num12){
                 a = strtok(cnum12, ",");
                temp12 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name12, num12, teach12, temp12, day12, time12);
             }
             else if(cid == num13){
                 a = strtok(cnum13, ",");
                temp13 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name13, num13, teach13, temp13, day13, time13);
             }
             else if(cid == num14){ 
                 a = strtok(cnum14, ",");
                temp14 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name14, num14, teach14, temp14, day14, time14);
            } 
             else if(cid == num15){
                 a = strtok(cnum15, ",");
                temp15 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name15, num15, teach15, temp15, day15, time15);
            }
            else{
            printf("incorrect format please enter 2 again and try this format>no space before CSCI and one space after.\n");
            }
    }

    if (choice == 3){
        char *dow = NULL;
        //printf("%s", day1);
        printf("Enter a day of week combination ");
        scanf("%s", dow);
        
        if (strcmp(dow, day1) == 0){
                a = strtok(cnum1, ",");
                temp1 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name1, num1, teach1, temp1, day1, time1);
                a = strtok(cnum2, ",");
                temp2 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name2, num2, teach2, temp2, day2, time2);
                a = strtok(cnum3, ",");
                temp3 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name3, num3, teach3, temp3, day3, time3);
                a = strtok(cnum4, ",");
                temp4 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name4, num4, teach4, temp4, day4, time4);
                a = strtok(cnum7, ",");
                temp7 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name7, num7, teach7, temp7, day7, time7);
                a = strtok(cnum8, ",");
                temp8 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name8, num8, teach8, temp8, day8, time8);
                a = strtok(cnum9, ",");
                temp9 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name9, num9, teach9, temp9, day9, time9);
                a = strtok(cnum10, ",");
                temp10 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name10, num10, teach10, temp10, day10, time10);
                a = strtok(cnum11, ",");
                temp11 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name11, num11, teach11, temp11, day11, time11);
                a = strtok(cnum12, ",");
                temp12 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name12, num12, teach12, temp12, day12, time12);
                a = strtok(cnum14, ",");
                temp14 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name14, num14, teach14, temp14, day14, time14);
                a = strtok(cnum15, ",");
                temp15 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name15, num15, teach15, temp15, day15, time15);
          
        }
        else{
                a = strtok(cnum13, ",");
                temp13 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name13, num13, teach13, temp13, day13, time13);
                a = strtok(cnum5, ",");
                temp5 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name5, num5, teach5, temp5, day5, time5);
               a = strtok(cnum6, ",");
                temp6 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name6, num6, teach6, temp6, day6, time6);
        } 
    }

    if (choice ==4){
        int *seat = 0;
        printf("Enter maximum number of seat: ");
        scanf("%d", seat);
            printf("i would have implemented this with a for loop that would have checked the input against the value set in the class for number of seats then print whichever one in that array it would have had");
    }
    if (choice ==5){
                 //to find the number of chairs in a class
                a = strtok(cnum1, ",");
                temp1 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name1, num1, teach1, temp1, day1, time1);
                a = strtok(cnum2, ",");
                temp2 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name2, num2, teach2, temp2, day2, time2);
                a = strtok(cnum3, ",");
                temp3 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name3, num3, teach3, temp3, day3, time3);
                a = strtok(cnum4, ",");
                temp4 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name4, num4, teach4, temp4, day4, time4);
                a = strtok(cnum5, ",");
                temp5 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name5, num5, teach5, temp5, day5, time5);
                a = strtok(cnum6, ",");
                temp6 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name6, num6, teach6, temp6, day6, time6);
                a = strtok(cnum7, ",");
                temp7 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name7, num7, teach7, temp7, day7, time7);
                a = strtok(cnum8, ",");
                temp8 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name8, num8, teach8, temp8, day8, time8);
                a = strtok(cnum9, ",");
                temp9 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name9, num9, teach9, temp9, day9, time9);
                a = strtok(cnum10, ",");
                temp10 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name10, num10, teach10, temp10, day10, time10);
                a = strtok(cnum11, ",");
                temp11 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name11, num11, teach11, temp11, day11, time11);
                a = strtok(cnum12, ",");
                temp12 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name12, num12, teach12, temp12, day12, time12);
                a = strtok(cnum13, ",");
                temp13 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name13, num13, teach13, temp13, day13, time13);
                a = strtok(cnum14, ",");
                temp14 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name14, num14, teach14, temp14, day14, time14);
                a = strtok(cnum15, ",");
                temp15 = strtok(NULL, ",");
                printf("%-35s %-12s %s\n%-5s %-5s %-5s\n", name15, num15, teach15, temp15, day15, time15);
                printf("%s", a);

    }
    



} while (choice != 6);


    
}
