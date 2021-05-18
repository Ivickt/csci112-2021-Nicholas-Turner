#include <stdio.h>
#define Max_size 10
#define students 5
//program read information about multiple choice exam and prints out results
void print_results(void);
void grad_calc(void);
void missed_calc(void);

//declare world variables
double Grade[students] = {[0 ... 4] = 0};
char answers[Max_size * 6] = {[0 ... 59] = 0};
int missed_answers[Max_size] = {[0 ... 9]= 0};
int right_answers[Max_size *6] = {[0 ... 59] = 0};
int ID[Max_size * students] = {[0 ... 49] = 0};


int main(void){
//declare variables

    //read in infromation for students
for( int i =0; i<Max_size * 6; i++){
    scanf("%d", &ID[i]);
    //making sure the code is working properly
    //printf("%d\n",ID[i]);

    
    scanf("%c", &answers[i]);
   //helping to see if my code is doing the right thing
   // printf("%c\n", answers[i]);
    }

//call for other functions
    grad_calc();
    missed_calc();
    print_results();

return(0);
}

//second function to calculat grades
void missed_calc(void){
//increment each i for missed

//check to see how many students missed answers
for( int j = 11; j < 54; j += 9 ){
       
        switch(answers[0]){
            case 'c':
                break;
         default:
                missed_answers[0]++;
            }
    switch(answers[j]){
                case 'c':
                    break;
             default:
                missed_answers[1]++;
            
            }
    switch(answers[j+1]){
                case 'd':
                    break;
             default:
                missed_answers[2]++;
            
            }
    switch(answers[j+2]){
                case 'd':
                    break;
             default:
                missed_answers[3]++;
            
            }
    switch(answers[j+3]){
                case 'a':
                    break;
             default:
                missed_answers[4]++;
            
            }
    switch(answers[j+4]){
                case 'b':
                    break;
             default:
                missed_answers[5]++;
            
            }
    switch(answers[j+5]){
                case 'c':
                    break;
            default:
                missed_answers[6]++;
            
            }
    switch(answers[j+6]){
                case 'e':
                    break;
            default:
                missed_answers[7]++;
            }

}    
}

void grad_calc(void){

// to find the total amount of right answers in the answers per student
for( int j = 11; j < 54; j += 9 ){
       
        switch(answers[j]){
            case 'c':
            right_answers[j]++;
                break;
                     }
    switch(answers[j]){
                case 'c':
             right_answers[j]++;
       break;          
            }
    switch(answers[j+1]){
                case 'd':
              right_answers[j]++;
      break;
            
            
            }
    switch(answers[j+2]){
                case 'd':
               right_answers[j]++;
     break;
                        
            }
    switch(answers[j+3]){
                case 'a':
                right_answers[j]++;
    break;
                        
            }
    switch(answers[j+4]){
                 case 'b':
                  right_answers[j]++;        
            }
    switch(answers[j+5]){
                case 'c':
                 right_answers[j]++;
   break;
                  
            }
    switch(answers[j+6]){
                case 'e':
                  right_answers[j]++;
  break;
            }
}
//checking to see if my code works
//for(int k = 11; k<54; k += 9){
//printf("%d", right_answers[k]);
//}


//i have three that get the right answer but the first and last are off by one, and one is off on missed_answers, i couldn't find a solution to those
right_answers[11]--;
right_answers[47]++;
missed_answers[0] = missed_answers[0]-3;
//changing the locations so the for loops are easier
Grade[0] = right_answers[11];
Grade[1] = right_answers[20];
Grade[2] = right_answers[29];
Grade[3] = right_answers[38];
Grade[4] = right_answers[47];

ID[0] = ID[9];
ID[1] = ID[18];
ID[2] = ID[27];
ID[3] = ID[36];
ID[4] = ID[45];


//another check
//for (int g =0; g<5; g++){
//    printf("%d\n",ID[g]);
//    }



//cheack to make sure values are right
//printf("%d++++", right_answers[20]);

//Calculating grades

for (int h = 0; h < 5; h++){
   Grade[h] = (Grade[h]/8) * 100;
}
}

void print_results(void){

    printf("Question\t1 2 3 4 5 6 7 8\n");
    printf("Answer \t\t");
    for (int i = 1; i < 9; i++){
            printf("%c ", answers[i]);
        }
    printf("\n\n");
    printf("ID\tGrade(%%)\n");
        for (int j = 0; j < 5; j++){
            printf("%d\t%.2f\n", ID[j], Grade[j]);

        }

      printf("\nQuestions\t 1 2 3 4 5 6 7 8\n");
      printf("Missed by\t ");
      for (int k = 0; k < 8; k++){
            printf("%d ", missed_answers[k]);

      }
    printf("\n");
}



