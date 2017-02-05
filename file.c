#include <stdio.h>

void Foo1()
{
	printf("foo1\n");
	printf("conflict2\n");
}

void Foo2()
{
	printf("foo2\n");
}

int main()
{
	Foo1();
	Foo2();
	return 0;
}
