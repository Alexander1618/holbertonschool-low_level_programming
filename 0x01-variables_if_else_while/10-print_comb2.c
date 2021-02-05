#include <stdio.h>
/*
*generate a random number af said if negative or positive
*/
int main(void)
{
	  
	   int numberRigth;
	   int numberLeft;

	   for (numberLeft = 48; numberLeft <= 57; numberLeft++)
	   {
		   for (numberRigth = 48; numberRigth <= 57; numberRigth++)
		   {
			   putchar(numberLeft);
			   putchar(numberRigth);
			   if (!(numberRigth == 57 && numberLeft == 57))
			   {
				   putchar(',');
				   putchar(' ');
			   }
		   }
	   }
	   putchar('\n');
	   return(0);
}
