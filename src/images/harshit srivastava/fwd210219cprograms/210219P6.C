/* TO DISPLAY WEEKDAYS USING SWITCH CASE STATEMENTS */

#include<stdio.h>
#include<conio.h>
void main()
{
 int c;
 printf("\n\n\n\t\t\t\t WEEK DAY Type \n\t SUNDAY    : 1  \n\t MONDAY    : 2  \n\t TUESDAY   : 3  \n\t WEDNESDAY : 4\n\t THURSDAY  : 5 \n\t FRIDAY    : 6 \n\t SATURDAY  : 7");
 printf("\n\n\t KINDLY ENTER THE DAY TYPE : ");
 scanf("%d",&c);
 switch(c)
 {
  case 1 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS SUNDAY");
	   break;
  case 2 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS MONDAY");
	   break;
  case 3 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS TUESDAY");
	   break;
  case 4 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS WEDNESDAY");
	   break;
  case 5 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS THURSDAY");
	   break;
  case 6 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS FRIDAY");
	   break;
  case 7 : printf("\n\n\n\t\t\t ENTERED WEEKDAY IS SATURDAY");
	   break;
  default : printf("\n\n\n\t\t\t OOPS! YOU HAVE ENTERED AN INVALID OPTION");
 }
 getch();
}