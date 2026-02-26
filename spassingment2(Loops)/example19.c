#include <stdio.h>

int main() {
    int a,b;
    int sum = 0;
    printf("Enter two integers (a<b): ");
    scanf("%d%d", &a,&b);

    for (int i=a; i<=b;i++) {
            sum+=i;}

        printf("a<b sum of natural numbers is :%d\n",sum);

    return 0;
}


