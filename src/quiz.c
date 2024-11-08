#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {

        int s_array[100] = {0};
        int *h_array = malloc(100*sizeof(int));

        for( int i = 0; i<=100; i++) {
                s_array[i] = h_array[i];
                h_array[i] = i;
        }

        FILE *f = fopen(argv[0], "r");

        return 0;
}
