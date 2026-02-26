#include <stdio.h>

int main() {
    int a,b,sum = 0;
    printf("Enter two integers (a>b): ");
    scanf("%d%d", &a,&b);

    for (int i=b; i<= a;i++) {
        sum+= i*i; }
        printf("Sum of squares from %d to %d: %d\n", b, a, sum);

    return 0;
}


