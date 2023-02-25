#include "main.h"

void print_binary(unsigned long int n)
{
	int x, y;
	char c;

	for (x = 0; x < sizeof(int); x++)
		for (y = 8; y >= 0; y--)
			c = 
	
	
		
		
		
		
) 
convert to binary, divide by two and if rem is zero take the ans and divide again

int n will be divide by two whih is n >>= 1
eg n = 10  is n = n / 2 which is 5
get the rem 
n - (n >>= 1) * 2
convert rem to a char

char c = rem + '0'

display putchar repeatedly



}
