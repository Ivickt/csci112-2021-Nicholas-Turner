//declare libraries
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int compare_quads( const void *a, const void *b) {
     //stores memory for the sorted array
     return memcmp (a, b, 4);

}

//using qsort to sort the 2d array from least to greatest only depending on the network address


int compare(int arg, unsigned char networks[arg][4])
{
    //sorts the network of size arg into the right slots
    qsort(networks, arg, sizeof(networks[0]), compare_quads);

        //checking to see if the order is correct
        //for (int k = 0; k< arg; k++){
        //    printf("%d.%d.%d.%d\n", networks[k][0],networks[k][1],networks[k][2],networks[k][3]);
        //    }
        //   printf("\n");
return 0;
}

