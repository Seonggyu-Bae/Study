#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {

	char N[100];
	int B;
	int sum = 0;
	scanf("%s %d", &N, &B);

	int len = strlen(N);
	
	for (int i = 0; i < len; i++) 
	{
		if (N[i] >= '0' && N[i] <= '9')
			sum += pow(B, len - i - 1) * (N[i] - '0');
		else
			sum += pow(B, len - i - 1) * (N[i] - 55);
	}

	printf("%d",sum);
	
    return 0;
}