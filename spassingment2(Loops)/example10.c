#include <stdio.h>

int main() {
    for (int i = 5; i <= 105; i++) {
        if (i > 25) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
