
/**************************************
 * This can be compiled like below.
 * $ gcc crackme.c -o crackme
 */

#include <stdio.h>
#include <string.h>

void getStringFromUser(char *text, unsigned int size)
{
	fputs("enter the passcode: ", stdout);
	fflush(stdout);
	if ( fgets(text, size, stdin) != NULL )
	{
		char *newline = strchr(text, '\n'); /* search for newline character */
		if ( newline != NULL )
		{
			*newline = '\0'; /* overwrite trailing newline */
		}
	}
}

int main() {
	char *passcode = "thisisthepasscode";
	char textFromUser[100];

	getStringFromUser(textFromUser, sizeof textFromUser);

	if (strcmp(textFromUser, passcode) == 0) {
		printf("You are correct!!! :-)\n");
	} else {
		printf("Incorrect... :-(\n");
	}

	return 0;
}
