#include<stdio.h>
int getnumber();    
int main() 
{
int input = 0;
input = getnumber();
while (!((input <= 9) && (input >= 1))) {
 printf(" The number you entered is not in range");
input = getnumber();
}
printf("The number you entered is %d", input);
return 0;
}      
int getnumber() 
{    
int number;
scanf("%d", &number);
return (number);
}
