#include <stdio.h>
#include <unistd.h>
/**
* main - This sis a function that prints the text below
* Return: (1) return is a sucess
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
