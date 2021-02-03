#incluide <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of an char: %lu byte(s)\n",sizeof(char));
	printf("Size of an int: %lu\n byte(s)\n",sizeof(int));
	printf("Size of an long int: %lu byte(s)\n",sizeof(long int));
	printf("Size of an long long: %d byte(s)\n",sizeof(long long)); 
	printf("Size of an float: %d byte(s)\n",sizeof(float));
	return (0);
}
