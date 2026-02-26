#include <stdio.h>

int main() {
    int sum = 0;


    for (int i=1; i<= 20;i++) {
       sum+= i*i*i;
    }
    printf("sum of cubes from 1 to 20: %d\n", sum);
    return 0;
}


