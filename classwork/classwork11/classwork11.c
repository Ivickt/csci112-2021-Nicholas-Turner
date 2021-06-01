#include <stdio.h>
#include <stdlib.h>

//# user-defined types
 struct {
int *x;
int *y;
char *s1;
    } point;

    int main(void) {
        char *s2;
        char *s1 = s2;
        int temp =1;

        s2 = (char*)(calloc(temp, sizeof(char)));
        
        struct point* P;

        P-> x = 13;
        P-> y = 4;
        
        printf("%d", P->x);
        printf("%d", P->y);

        free(s2);

                                       return(0);
                                }
