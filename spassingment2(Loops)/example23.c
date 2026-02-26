#include <stdio.h>

int main() {
    int sum = 0;

    for (int i=1; i<= 5;i++) {
        sum+= i*i*i;}
        printf("Sum of the series 1³ + 2³ + 3³ + 4³ + 5³: %d\n", sum);
    return 0;
}


