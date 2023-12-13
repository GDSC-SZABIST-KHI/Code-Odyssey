#include <stdio.h>

void writeFile()
{
	int buf;

	printf("Enter number;");
	scanf("%d", &buf);

	printf("You entered %d", buf);

	FILE *fp = fopen("test.txt", "a+");
	if (!fp)
	{
		printf("cannot open file");
	}

	fprintf(fp, "%d\n", buf);
}

int main()
{

	// writeFile();

	FILE *fp = fopen("array.txt", "r+");

	if (!fp)
	{
		printf("cannot open file");
	}

	int buffer;
	while (fscanf(fp, "%d\n", &buffer) > 0)
	{
		printf("%d\n", buffer);
	}

	return 0;
}