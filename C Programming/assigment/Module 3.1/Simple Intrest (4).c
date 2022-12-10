#include <stdio.h>

void main() 

{
    float principal , rate, time;
    printf("Enter Principal : \n");
    
    scanf("%f", &principal);
    
    printf("Enter Rate of interest : ");
    
    scanf("%f", &rate);
    
    printf("Enter Time : ");
    
    scanf("%f", &time);
    printf("Ans : %f", principal*rate*time);
}