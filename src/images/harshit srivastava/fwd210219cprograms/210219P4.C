/* PROGRAM TO CALCULATE ELECTRICITY BILL WITH THE FOLLOWING INFORMATION

      CONSUMPTION UNIT                     RATE OF CHARGE

	 000-150                             Rs 3.00 per unit
	 151-350                             Rs 3.75 per unit + Rs 100 extra
	 351-450                             Rs 4.00 per unit + Rs 250 extra
	 451-600                             Rs 4.75 per unit + Rs 300 extra
	 601 and above                       Rs 5.00 per unit + Rs 400 extra */

#include<stdio.h>
#include<conio.h>
void main()
{
 float units;
 clrscr();
 printf("\n\n\n Kindly Enter the Consumption Unit : ");
 scanf("%f",&units);
 if(units>=0&&units<=150)
  {
   printf("\n\t Your Total Bill for consumption of %f units is %f",units,units*3);
  }
 else
  {
   if(units>150&&units<=350)
   {
    printf("\n\t Your Total Bill for consumption of %f units is %f",units,units*3.75+100);
   }
   else
    {
     if(units>350&&units<=450)
     {
      printf("\n\t Your Total Bill for consumption of %f units is %f",units,units*4+250);
     }
     else
     {
      if(units>450&&units<=600)
      {
       printf("\n\t Your Total Bill for consumption of %f units is %f",units,units*4.75+300);
      }
      else
      {
       printf("\n\t Your Total Bill for consumption of %f units is %f",units,units*5+400);
      }
     }
    }
   }
  getch();
  }