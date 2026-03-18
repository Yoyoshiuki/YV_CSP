#include <stdio.h>
//For random
#include <stdlib.h>
#include <time.h>

 player = (player == 'X') ? 'O' : 'X';
 
int main(){
    int i = 1;
    while (i <= 10 ){
        printf("%d \n", i);
        i++; //increases i by 1
    }
    //generate random #
    srand(time(NULL));
    printf("%d\n", rand() % 10); //ran between 0 and 10
    printf("%d\n", rand() % 4 + 1); //
    printf("%d\n", rand() % 20);

    int goose = (rand() % 9)+1;
    int count = 1;

    while(count < goose){
        printf("Duck!\n");
        count++;
    }
printf("Goose!\n");

    return 0;
}