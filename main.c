#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void write_file() 
{
	FILE* fp = fopen("test.txt", "w");
	int a = 1, b = 2, c = 3;
	fprintf(fp, "%d %d %d", a, b, c);
	fclose(fp);
}

void read_file() 
{

	FILE* fp = fopen("test.txt", "r");
	int a, b, c;
	fscanf(fp, "%d %d %d", &a, &b, &c);
	printf("%d %d %d", a, b, c);
	fclose(fp);
}

void append_file()
{
	int a = 4, b = 5, c = 6;
	FILE* fp = fopen("test.txt", "a");
	fprintf(fp, "%d %d %d", a, b, c);
	fclose(fp);
}

int main() 
{
	write_file();
	read_file();
	append_file();
}
