#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, min, N, x[100];
	printf("Enter N: ");
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	min = x[0];
	for (i = 1; i < N; i++)
		if (min > x[i])  min = x[i];
	printf("Min = %d\n\n", min);
}