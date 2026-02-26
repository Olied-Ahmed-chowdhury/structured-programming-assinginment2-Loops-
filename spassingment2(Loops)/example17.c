#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two integers (a>b): ");
    scanf("%d%d", &a,&b);

    for (int i=b; i<= a;i++) {
        printf("%d\n",i);
    }
    return 0;
}

