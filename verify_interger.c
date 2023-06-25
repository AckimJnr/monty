#include <string.h>
#include <ctype.h>
/**
 * verify_int - Verifies if the number is an interger or not
 * @str: the string interger to be verified
 *
 * Return: Returns 0 if the string contains non int values otherwise return 1
 */
int verify_int(char str[])
{
	size_t i;

	if (str == NULL)
		return (0);

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
