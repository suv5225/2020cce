#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	if( 90 <= n ) printf("A\n");
	else if( 80 <= n && n < 90 ) printf("B\n");
	else if( 60 <= n && n < 80 ) printf("C\n");
	else printf("F\n");
}
