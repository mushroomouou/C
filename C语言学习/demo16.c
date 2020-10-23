#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	void *p;
	int cnt = 0;
	p = malloc(100 * 1024 * 1024);
	free (p);
	return 0;
}
