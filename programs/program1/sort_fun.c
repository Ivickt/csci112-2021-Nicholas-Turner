#include <stdio.h>
//declaring variables


void sort_fun(int arg, unsigned char networks[arg][4]){
    //declaring variabes
    printf("working so far");
//sorting by comlumn p
    for (int k = 0; k < arg; k++){
        for( int i = 0; i < 4; i++){
            for (int j = i+1; j<4; ++j){
                if (networks[k][i] > networks[k][j]) {
                    int swap = networks[k][i];
                    networks[k][i] = networks[k][j];
                    networks[k][j] = swap;
                }
            }
        printf("%hhui+++++",networks[k][i]);
        }
    }
}
