#include <stdio.h>
#include <conio.h>
void main()
 {
 int age[10],i ;
 float avg,sum=0.0;
 clrscr();
 for(i=0;i<10;i++)
 {
 printf("\nENTER AGE-%d: ",i+1);
  scanf("%d",&age[i]);
 sum=sum+age[i];
 }
 printf("\nINPUT AGES ARE: ");
 for(i=0;i<10;i++)
 printf("%d ",age[i]);
avg=sum/10;
printf("\nTHE AVERAGE AGE IS: %0.2f",avg);
getch();
}
