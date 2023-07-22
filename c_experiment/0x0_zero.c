#include <stdio.h>
#include <string.h>

/*
 * main - writing of texts
 * Retuen: void
 */

int main(void)
{
	char str[100];

	printf("ENTER TEXT ");
	fgets(str, 100, stdin);
	printf("%s", str);
	return(0);
}
