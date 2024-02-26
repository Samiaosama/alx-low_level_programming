#include <unistd.h>
#include "main.h>

/**
*_putchar - writes the charcterc to stdout
*
*@c:the character to print
*
* Return : one success 1.
* one error, -1 is returened,and errno is set appropriataly
*/
int _putchar(char c)
{
	return (write (1, &c, 1));

}
