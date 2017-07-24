#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
 char string[MAX_SIZE];
 int  digits, others, i;
  others = i = 0;
  printf("\nEnter any string : ");
 gets(string);
 while(string[i]!='\0')
 {
 if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
  {
 others++;
 }
 i++;
 }
 printf("\nSpecial characters = [ %d ]\n", others);
 return 0;
}
