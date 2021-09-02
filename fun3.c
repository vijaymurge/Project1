#include<stdio.h>
#include<conio.h>
void add(int, int);
main()
{
	int a, b;
	printf("Enter two no");
	scanf_s("%d %d", &a, &b);
	add(a, b); // actual argument
}
void add(int a, int b) // formal argument
{
	int c;
	c = a + b;
	printf("add %d", c);
}