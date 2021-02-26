#include <stdio.h>
int main()
{
	int a[10];
	int r = 0;

	for( int i = 0 ; i < 10 ; i++ )
	{
		scanf("%d",&a[i]);

		if( a[i] % 3 == 0 )
		{
			r++;
		}
	}

	printf("%d\n",r);

}
