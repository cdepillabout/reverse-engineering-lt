
#include <stdio.h>
#include <string.h>

void getStringFromUser(char *text, unsigned int size)
{
	fputs("enter some text: ", stdout);
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
	char *password1 = "thisis";
	char *password2 = "thepassword";
	char combinedPasswords[100] = "";
	char textFromUser[100];

	getStringFromUser(textFromUser, sizeof textFromUser);

	// combine passwords
	strcpy (combinedPasswords, password1);
	strcat (combinedPasswords, password2);

	if (strcmp(textFromUser, combinedPasswords) == 0) {
		printf("\nYou are correct!!! :-)\n");
	} else {
		printf("\nIncorrect... :-(\n");
	}

	return 0;
}
