// TO CALCULATE PARKING CHARGES OF VEHICLE (PROGRAM TYPE 2) 21-02-19 //
#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 int hr;
 int bill=0;
 clrscr();
 printf("\n\n\n\t\t\t\t Vehicle Type \n\t Truck or Bus : T \n\t Car or Jeep : C \n\t Bike or Scooter : S");
 printf("\n\n\t\t Kindly use the following character for your vehicle\n\t\t and enter the type of your vehicle ");
 scanf("%c",&ch);

 printf("\n\n Kindly enter the number of parking hours : ");
 scanf("%d",&hr);
 if(ch=='T'||ch=='t')
 {
  if(hr>=0&&hr<=3)
  {
   bill=hr*20;
   printf("\n\n\t Your total bill is : %d",bill);
  }
  else
  {
   bill=(hr-3)*30+60;
   printf("\n\n\t Your total bill is : %d",bill);
  }
 }
 if(ch=='C'||ch=='c')
 {
  if(hr>=0&&hr<=3)
  {
   bill=hr*10;
   printf("\n\n\t Your total bill is : %d",bill);
  }
  else
  {
   bill=(hr-3)*20+30;
   printf("\n\n\t Your total bill is : %f",bill);
  }
 }
  if(ch=='S'||ch=='s')
 {
  if(hr>=0&&hr<=3)
  {
   bill=hr*5;
   printf("\n\n\t Your total bill is : %f",bill);
  }
  else
  {
   bill=(hr-3)*10+15;
   printf("\n\n\t Your total bill is : %f",bill);
  }
 }

  getch();
}