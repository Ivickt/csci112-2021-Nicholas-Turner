#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void store(char **argv);
void print(void);

int a;
char *s;
    vector<string> nums;
    vector<string> single {"i", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};  
    vector<string> second {"i", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> twos {" ", " ", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
 
int main(int argc, char **argv) {
    
    string num;
    store(argv);
    print();

return(0);
}

void store(char **argv){

    string num;
    s = argv[1];
    nums.push_back(s);
    a = atoi(s);
 

}


void print(void){

    
        //will print out less than 10
        if (a < 10){
               cout << "Number " << s << " is written as " << single[a] << '\n';
        }
        //will print out less than 100
        else if (a < 100){
            //equations to get the numbers in the right spot
            int temp10 = a / 10;
            int temp1 = a - temp10*10;
            //checks if zeros or ones are in the input
            if (temp10 == 1){
                cout << "Oops! Entered a 1 in the tens place" << '\n';
            }
            else if (temp1 == 0){
                cout << "Oops! Entered a 0 in the number";
            }else{
                cout << "Number " << s << " is written as " << single[temp10] << " " << single[temp1] << '\n';
            }
        }
        //less than 100 will print out
        else if (a < 1000){
            int temp100 = a / 100;
            int temp10  = a - temp100*100;
            temp10  = temp10 / 10;
            int temp1   = a - temp100*100 - temp10*10; 
                if (temp10 == 1){
                     cout << "Oops! Entered a 1 in the tens place";

                }else if (temp10 == 0 || temp1 == 0){
                    cout << "Oops! Entered a 0 in the number" << '\n';
                }else{
                    cout << "Number " << s << " is written as " << single[temp100] << " hundred " << twos[temp10] << " " <<single[temp1] << '\n';
                }
        }
        // when input is lower than 10000 it will print out the words
        else if (a < 10000){
            int temp1000 = a / 1000;
            //cout << "+++" << temp1000 << "+++" << '\n';
            int temp100 = a - temp1000*1000;
            temp100 = temp100 / 100;
            int temp10  = a - temp1000*1000 - temp100*100;
            temp10  = temp10 / 10;
            int temp1   = a - temp1000*1000 - temp100*100 - temp10*10; 
            if (temp10 == 1){
                cout << "Oops! Entered a 1 in the tens place" << '\n';
            
            }else if (temp1000 == 0 || temp100 == 0 || temp10 == 0 || temp1 == 0){
                cout << "Oops! Entered a 0 in the number" << '\n';
            }else{
                cout << "Number " << s << " is written as " << single[temp1000] << " thousand " << single[temp100] << " hundred " << twos[temp10] << " " << single[temp1] << '\n';
            }
        }



}
