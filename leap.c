#include <stdio.h>
 
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int x = 0; 
    printf("Leap years from 1 to 2017:\n");
    for(int i=1;i<=2017;i++)
    {
        if(checkLeapYear(i))
            printf("%d\t",i);
    }
    
    return 0;
}
