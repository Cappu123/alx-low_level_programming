#include "main.h"
/**
* binary_to_uint - The function converts a binary number to an unsigned int.
* @b: The pointer to a string containing a binary number
*
* Return: unsigned int with decimal value of binary number, or 0 if error
*/
unsigned int bineary_to_unit(const char *b)
{
  unsigned int cappu;
  int len;
  
cappu = 0;
if (!b)
  return (0);
for (len = 0; b[len] != '\0'; len++)
{
  if (b[len] != '0' && b[len] != '1')
    return (0);
}
for (len = 0; b[len] != '\0'; len++)
{
  cappu <<= 1;
if (b[len] == '1')
  cappu += 1;
}

return (cappu);
}
