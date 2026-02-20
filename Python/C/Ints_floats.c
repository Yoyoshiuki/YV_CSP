#include <stdio.h>
#include <math.h>

int main(){
    int apples = 10;
    int people = 6;
    int hour = 12;
    int minutes = hour * 60;
    printf("%d, %d, %d\n", apples, people, hour);
//float(apples) <= in python
    printf("%f\n", (float)apples/people);
    printf("%d hours is %d minuites %d minutes\n", hour, minutes);
    float pi = 3.1415;
    float liters = 8.3;
    float years = 22.5;
    float cups = liters * 4.22675;
    
    printf("%f, %f.1, %f.2\n", pi, liters, years);
    printf("%.1f, liters is %.1f cups\n", liters, cups);
    printf("%f.2 in Fahrenheit is %f.2 in Celsius", 70.0, (70,0 -32)*5/9);

    return 0;
}
