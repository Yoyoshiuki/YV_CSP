#include <stdio.h>

void monthly(float cost, float per, char* name) {
    printf("You're spending $%.2f on %s which is %.2f%% of your income!\n", cost, name, per);
}

float ask(char* name) {
    int value;
    printf("how much are you spending on %s? ", name);
    scanf("%lf", &value);
    return value;
}
float calc(float number, int income) {
    return ((number / income) * 100);
}

int main() {
    float income = 0.0;
    printf("How much is your income cuh? ");
    scanf("%lf", &income);



  return 0;
}