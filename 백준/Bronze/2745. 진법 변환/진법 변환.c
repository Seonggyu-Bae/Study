#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

	char N[100];
	int B;
	int sum = 0;
	int power = 1;
	scanf("%s %d", &N, &B);

	for (int i = strlen(N)-1 ; i >= 0; i--) 
	{
		if (N[i] >= '0' && N[i] <= '9')
			sum += power * (N[i] - '0');
		else
			sum += power * (N[i] - 55);

		power *= B;
	}

	printf("%d",sum);
	
    return 0;
}