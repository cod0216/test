#include <stdio.h>
#include <time.h>

int main()
{
	int a = time(rand(NULL));
	printf("%d " ,a);

	return 0;
}
