#include <stdio.h>
#include <stdlib.h>
#include <string>

char line[2000][80];
char trash[80];

int compare( const void *p1 , const void *p2 )
{
	char * s1  = (char*)p1;
	char * s2  = (char*)p2;

    int result = strcmp( s1 ,s2 );

	if( result == 1 ) return 1;
    if( result == 0 ) return 0;
    if( result == -1 ) return -1;

}


int main()
{
	int n;
	scanf("%d",&n);

	for( int i = 0 ; i < n ; i++ )
	{
		scanf("%s",line[i]);
		gets( trash );
	}

	qsort( line , n , 80 , compare );

	int ans = 1;

	printf("%s ",line[0]);

	for( int i = 0 ; i < n - 1 ; i++ )
	{
		if( strcmp( line[i] , line[i+1] ) != 0 )
		{
			printf("%d\n",ans);
			printf("%s ",line[i+1]);
			ans = 1;
		}

		else ans++;
	}

	printf("%d\n",ans);

}
