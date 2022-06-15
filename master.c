#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_SIZE 100
#define ELEMENT 100

typedef struct node{
	int key;
	int index[MAX_SIZE];
} node;

int main()
{
	int a = time(rand(NULL));
	printf("%d " ,a);

	printf("sample file in master branch\n");
	return 0;
}
