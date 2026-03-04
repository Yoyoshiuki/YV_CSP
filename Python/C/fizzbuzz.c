//YV Period 3 FizzBuzz

#include <stdio.h>

int main() {
    int start = 0;
    while (start < 50) {
        start += 1;
        if (start % 3 == 0 && start % 5 == 0 ) {
            printf("FizzBuzz\n");
        } else if (start % 3 == 0) {
            printf("Fizz\n");
        } else if (start % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", start);
        }
    }
    return 0;
}