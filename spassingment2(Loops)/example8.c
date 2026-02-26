#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
        if (i == 25) {
            return 0;
        }
    }
    return 0;
}
