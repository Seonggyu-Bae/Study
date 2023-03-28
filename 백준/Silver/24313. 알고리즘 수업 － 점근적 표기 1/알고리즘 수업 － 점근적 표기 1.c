#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int a1, a0;
	int c;
	int n0;

	scanf("%d %d %d %d", &a1, &a0, &c, &n0);

	if ( (a1*n0 + a0 <= c*n0) && (a1-c <=0) )
		printf("1");
	else
		printf("0");

    return 0;
}