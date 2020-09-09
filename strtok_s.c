#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Hi, you are so cute, but I still don't know your name";
	char *buf = str; //pointer buf points to the address of str
	char *warehouse[20]; // to store the parts
	char *outer = NULL, *inner = NULL;
	int i = 0, j = 0;
	
	while((warehouse[i] = strtok_s(buf, ",", &outer)) != NULL)
	{
		buf = warehouse[i];
		while((warehouse[i] = strtok_s(buf, " ", &inner)) != NULL)
		{
			i++;
			buf = NULL;
		}
		buf = NULL;	
	}
	printf("====Here we have %d parts.====\n", i);
	for(j = 0; j < i; j++)
	{
		printf("====>%s<====\n", warehouse[j]);
	}	
	return 0;
}
