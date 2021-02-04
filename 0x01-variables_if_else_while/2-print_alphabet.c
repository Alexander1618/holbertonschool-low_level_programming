#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*generate a random number af said if negative or positive
*/
int main(void)
{
	char Cadena[] = "abcdefghijklmnopqrstuvwxyz";
	int n = 0;
	for (n = 0; n < 26; n++)
		putchar(Cadena[n]); 
    
	return (0);
}
