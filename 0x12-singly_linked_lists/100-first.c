#include "lists.h"

/**
 * myStartupFun - ...
 *
 * Return: ...
 */
void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow, ");
	printf("\nI bore my house upon my back!\n");
}
