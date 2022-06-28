#include <stdio.h>

void print_reverse(int n)
{
	for (int i = n; i > 0; i--)
	{
		printf("%d", i);
	}

}

int main()
{
	int n;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	printf("Natural number from %d to 1:\n", n);
	print_reverse(n);
}
