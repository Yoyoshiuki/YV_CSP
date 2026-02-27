//YV 2 Time of day

#include <stdio.h>

int main(){
    int time;
    printf("Whats the time in your area in military time: ");
    scanf("%d", &time); 

    if (time >= 12 && time < 21){
        printf("Your time is %d, Good Afternoon sailor moon!\n", time); 
    } else if (time < 12){  
        printf("Your time is %d, Good morning sunshine!\n", time);  
    } else if (time >= 21){
        printf("Your time is %d, Good Night don't let the bed bugs bite!\n", time); 
    } else if (time >= 25){
        printf("Your time is %d, Thats too high pick an actual time!\n", time); 
    } else if (time < 0){
        printf("Your time is %d, That's too low pick an actual time!\n", time); 
    };

    return 0;
}






