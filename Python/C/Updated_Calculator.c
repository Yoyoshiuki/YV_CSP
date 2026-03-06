#include <stdio.h>

void mon(float cost, float per, char* name) {
    printf("You're spending $%.2f on %s which is %.2f percent of your income!\n", cost, name, per);
}


float calc(float number, float income) {
    return ((number / income) * 100);
}


float ask(const char* name) {
    float spend;
    int rc;

    do {
        printf("How much are you spending on %s? ", name);
        rc = scanf("%f", &spend);
        if (rc != 1) {
            printf("Please enter a valid number.\n");
            int c;
            while ((c = getchar()) != EOF && c != '\n');
        }
    } while (rc != 1);

    return spend;
}


int main() {
    float income = 0.0;
    int rc;

    do {
        printf("How much is your income? ");
        rc = scanf("%f", &income);
        if (rc != 1) {
            printf("Please enter a valid number.\n");
            int c;
            while ((c = getchar()) != EOF && c != '\n');
        }
    } while (rc != 1);

    float rm = ask("rent");
    float ut = ask("utilities");
    float gr = ask("groceries");
    float tr = ask("transportation");

    float sv = 0.10 * income;
    float t = rm + ut + gr + tr + sv;
    float tt = income - t;

    mon(rm, calc(rm, income), "rent");
    mon(ut, calc(ut, income), "utilities");
    mon(gr, calc(gr, income), "groceries");
    mon(tr, calc(tr, income), "transportation");
    
    printf("You should save %.2f since that's 10 percent of your income!\n", sv);
    printf("You have $%.2f of spending money!\n", tt);

  return 0;
}