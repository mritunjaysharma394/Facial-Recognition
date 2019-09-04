/* TO DISPLAY IF A GIVEN CHARACTER IS VOWEL OR CONSONANT USING SWITCH CASE STATEMENT */

#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
 clrscr();
 printf("\n\n\t\tKindly enter a valid character : ");
 scanf("%c",&c);
 switch(c)
 {
  case 'a': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'A': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'e': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'E': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'i': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'I': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'o': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'O': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'u': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  case 'U': printf("\n\n\t\t\t%c is a VOWEL",c);
	    break;
  default : printf("\n\n\n\t\t\t%c is a CONSONANT",c);
  }
  getch();
  }