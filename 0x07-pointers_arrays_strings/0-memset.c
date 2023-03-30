#include "main.h"

/*
* *_memset - fills a pointer with constant char b for n bytes
*
*@*s: pointer to be filled
*@b: constant character to be copied.
*@n:number of bytes to be allocated for copying
*/

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int x;
  
  for (x = 0; x < n; x++)
  {
    *s[x] = b;
  }
  return (*s);
}
