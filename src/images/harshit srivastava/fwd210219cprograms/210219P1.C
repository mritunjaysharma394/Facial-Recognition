// PROGRAM TO FIND IF ENTERED CHARACTER IS VOWEL 21-02-19//
#include<stdio.h>
#include<conio.h>
void main()
{
 char a;
 clrscr();
 printf("\n\n\n\t\t KINDLY ENTER A CHARACTER : ");
 scanf("%c",&a);
 if(a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'||a=='A'|| a=='E'||a=='I'||a=='O'||a=='U')
  printf("\n\n\n\t\t\t %c is a VOWEL",a);
 else
  printf("\n\n\n\t\t\t %c is a CONSONANT",a);
 getch();
}
