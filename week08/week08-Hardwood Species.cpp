#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char tree[1000000][32];	///怕字串後面的\0沒有準備好,所以開大一點,30->32

int compare( const void *p1 , const void *p2 )
{
	return strcmp( (char*)p1 , (char*)p2 );
}

int main()
{
	int T;///test case測試資料有幾筆
	scanf("%d\n\n",&T);
	///	   會把後面2個跳行吃掉

	int N = 0;

	for( int i = 0 ;	; i++ )
	{
		char* now = gets( tree[i] );
///		一次讀一整行,用gets() , 不能用scanf()

		if( now == NULL )///讀入失敗
		{
			N = i;
			break;
		}

		if( strcmp( tree[i] , "" ) == 0 )///空白行
		{
			N = i;
			break;
		}
	}

	qsort( tree , N , 32 , compare );

	printf("%s ",tree[0]);
	int ans = 1; ///從1開始數(又有新的1筆)

	for( int i = 0 ; i < N - 1 ; i++ )
	{
		if( strcmp( tree[i] , tree[i+1] ) != 0 )
		{///不同時
			printf("%.4f\n", 100 * ( ans / (float)N ) );
			printf("%s ",tree[i+1]);
			ans = 1;
		}
		else ans++; ///相同時
	}

	printf("%.4f\n", 100 * ( ans / (float)N ) );
}
