//YV period 2 Silly Sentences
#include <stdio.h>

int main() {
    char title[] = "we are going to do a mad libs! ";
    char greet[] = "Hello ";
    strcat(title, greet);
    printf("%s\n", greet);
    int adj;
    printf("Type an adjective: ");
    scanf("%d", &adj);  
    printf("Type a color: ");
    scanf("%d", &color); 
    int color;
    printf("Type a color: ");
    scanf("%d", &color); 
    int body;
    printf("Type a body part: ");
    scanf("%d", &body); 
    int noun;
    printf("Type a noun: ");
    scanf("%d", &noun); 
    int num;
    printf("Type a number: ");
    scanf("%d", &num); 
    int ani;
    printf("Give me an animal now: ");
    scanf("%d", &ani); 
    int verb;
    printf("Throw me a verb: ");
    scanf("%d", &verb); 
    int prl1;
    printf("Fling me a plurl noun: ");
    scanf("%d", &prl1); 
    int prl2;
    printf("Fling me another plurl noun: ");
    scanf("%d", &prl2); 
    int prl3;
    printf("Fling me another plurl noun: ");
    scanf("%d", &prl3); 



 printf("Santa Claus is %s a man who wears a %s %s suit with a %s belt and a %s %s hat. He has a long %s %s beard and his %s shakes like jelly everytime he laughs. Every christmas he rides a %s full of presents, pulled by a %s %s high into the night sky. Santa %s down the chimney of peoples homes to leave %s, %s, and %s under their christmas tree!\n",
           adj, adj, color, color, adj, color, adj, color, body, noun, num, ani, verb, prl1, prl2, prl3);
    return 0;
 }
