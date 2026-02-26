//YV Conditionals 
#include <stdio.h>
#include <string.h>

int main(){
    int grade = 87;

    if (grade >= 90){
        printf("You have a %d percerent. That is an A!\n", grade);
    } else if (grade >= 80){
        printf("You have a %d percerent. That is a B!\n", grade);
    }else if (grade >= 70){
        printf("You have a %d percerent. That is a c!\n", grade);
    }else if (grade >= 60){
        printf("You have a %d percerent. That is a D!\n", grade);
    }else{
        printf("Oh no broski youre failing cuz of that %d\n", grade);
    }

    int num = 4;
    if (num%2 == 0 && (num <10 && num > - 10)){
        printf("%d is a single digit even number\n", num);
    } else if (num%2 != 0 && (num <10 && num > - 10)){
        printf("%d is a single digit odd number\n", num);
    }else{
        printf("%d is not a single digit number\n", num);
    }
        
    char name[] = "Eric";

    if(strcmp(name, "Cora") == 0) {
        printf("Welcome Admin!\n");
    }else{
        printf("Oh hi there %s\n", name)
    }
    return 0;
}