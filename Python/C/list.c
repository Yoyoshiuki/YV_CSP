#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//Ex 1
int grades[] = {74, 88, 95, 87, 98};
printf("%d\n", grades[2]);

//ex 2
float sizes[] = {3.57, 25.95, 36.1, 5.99};
sizes [0] = 10.45;
printf("%.2f\n", sizes[0]);
sizes[0] = 10.45;
printf("%.2f\n", sizes[0]);

//Ex 3
char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavior", "Jake"};
printf("%s\n", names[5]); //Fisat braccet is for number of tiems in the array, the second bracket is for numer of letter allowes in each string
*names[5] =" ";

for(int i = 20; i >= 0; i--){
    printf("%d ", i);
}

srand(time(NULL));

int length = sizeof(names)/sizeof(names[0]);

for(int x = 0; x < length; x++){
    printf("%s Larose \n", names[x]);
}
    return 0;
}
