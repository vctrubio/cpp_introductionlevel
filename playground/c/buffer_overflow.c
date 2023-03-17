#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_auth(char *password)
{
	int 	flag = 0;
	char 	buffer[16];

	strcpy(buffer, password);

	if (strncmp(buffer, "brillig", 6) == 0)
		flag = 1;
	if (strncmp(buffer, "outgrabe", 7) == 0)
		flag = 1;
	return flag;
}

int main(int c, char **a)
{
	if (c == 2)
	{
		if (check_auth(a[1]))
			printf("YES Passowrd CORRECT\n");
		else
			printf("NO Password INCORRECT\n");
	}
}


