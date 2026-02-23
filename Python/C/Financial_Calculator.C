#include <stdio.h>
#include <math.h>

int main() {
    float income, rm, ut, gr, tr;
    printf("What's your monthly income twin: ");
    scanf("%lf", &income);
    printf("That's cool, that's cool. What's your rent or mortgage cuh?  ");
    scanf("%lf", &rm);
    printf("How much do you spend on your utilities broski? ");
    scanf("%lf", &ut);
    printf("How much are your groceries bruh? ");
    scanf("%lf", &gr);
    printf("How much is your transportation cost brotha? ");
    scanf("%lf", &tr);

    float rmt = round2((rm / income * 100), 2);
    float grt = round2((gr / income * 100), 2);
    float trt = round2((tr / income * 100), 2);
    float sv = round2((0.10 * income), 2);
    float utt = round2((ut / income * 100), 2);
    float t = round2((rm + ut + gr + tr + sv), 2);
    float tt = round2((income - t), 2);

    printf("Your rent is $%.2f and that is %.2f%% of your income\n", rm, rmt);
    printf("Your utilities cost is $%.2f and that is %.2f%% of your income\n", ut, utt);
    printf("Your groceries are $%.2f and that is %.2f%% of your income\n", gr, grt);
    printf("Your transportation cost is $%.2f and that is %.2f%% of your income\n", tr, trt);
    printf("You should save $%.2f and that is 10%% of your income\n", sv);
    printf("You have $%.2f of spending money each month!\n", tt);

    return 0;
}
