#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int inp;
	scanf("%d", &inp);

	if(inp % 2)
		printf("Alice\n");
	else
		printf("Bob\n");

	return 0;
}