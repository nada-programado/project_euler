#include <stdio.h>

int main() {
    int sum = 0;
    int limit = 1000;
    for (int i = 1; i < limit; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;

    printf("%d\n", sum);
    return 0;
}
