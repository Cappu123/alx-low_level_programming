/*
* clear_bit - sets the value of a bit to 0 at a gicen index.
* @n: pointer of an unsigned long int;
* @index: index of the bit
* 
* Return: 1 if it works, -1 if it doesnot
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;

	if (index > 63)
		return (-1);
	
	l = 1 << index;

	if (*n & l)
		*n ^= l;
	return (1);
}
