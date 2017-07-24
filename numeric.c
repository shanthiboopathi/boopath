#include <stdio.h>
void main()
{
char str [125];
int count,n =0,sum=0;
printf("Enter the numeric string\n");
scanf("%s", str);
for(count=0; str [count]!='\0'; count++)
{
if((str [count]>='0') && (str [count]<='9'))
{
n  += 1;
sum += (str [count] - '0');
}	 
}   
printf("NO. of Digits in the string=%d\n",n );
 printf("Sum of all digits=%d\n",sum);
}
