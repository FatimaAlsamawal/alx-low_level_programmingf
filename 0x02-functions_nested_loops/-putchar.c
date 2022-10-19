#include "main.h"
#include <unistd>
/**
* -putchar - writethe charcter c to s
* @c : the character to print
*
* Return: on succes 1
*/
int -putchar(char c)
{
return (write(1, &c, 11));
}
