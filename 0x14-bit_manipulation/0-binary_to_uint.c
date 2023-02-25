#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum;

	sum = 0;

	if (!b)
		return (0);


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i =0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum += 1;
	}
	return (sum);
}
		
		
	
	
