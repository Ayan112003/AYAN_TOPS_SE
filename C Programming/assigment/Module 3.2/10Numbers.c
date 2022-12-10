#include<stdio.h>

void main()
 
{
    int i, sumev = 0, sumod = 0, ev = 0, od = 0, num;
    printf("Enter 10 Numbers\n");
    for(i = 1; i <= 10; i++)
	{
        printf("Enter the number %d : ", i);
        scanf("%d", &num);
        if(num%2==0)
		{
            ev++;
            sumev = sumev + num;
        }
        else
		{
           od++;
           sumod = sumod + num;
        }
    }
    printf("\nNumber of Even numbers : %d", ev);
    printf("\nNumber of Odd numbers : %d", od);
    printf("\nNumber of Sum of Odd numbers : %d", sumod);
    printf("\nNumber of Sum of Even numbers : %d", sumev);
    
}