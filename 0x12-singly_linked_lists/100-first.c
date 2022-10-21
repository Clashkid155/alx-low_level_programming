#include <stdio.h>

void say(void) __attribute__((constructor));

/**
* say - Execute befor main function
*/

void say(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
