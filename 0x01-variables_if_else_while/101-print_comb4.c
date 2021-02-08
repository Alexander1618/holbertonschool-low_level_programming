#include <stdio.h>
/*
*generate a random number af said if negative or positive
*/
int main(void)
{
	   int numRigth;
	   int numLeft;
	   int numLast;

	   for (numLeft = 48; numLeft <= 55; numLeft++)
	   {
		   for (numRigth = 49; numRigth <= 56; numRigth++)
		   {
			   for (numLast = 51; numLast <= 57; numLast++)

			   { if (!(numRigth == numLeft || numRigth == numLast ||
 numRigth == numLast))
				   {
				   putchar(numLeft);
			 	   putchar(numRigth);
				   putchar(numLast);
				   /* if (!(numRigth == 56 && numLeft == 57 &&
				      numLast == 57))*/
				   putchar(',');
				   putchar(' ');
				   }
			   }
		   }
	   }
	   putchar('\n');
	   return(0);
}
