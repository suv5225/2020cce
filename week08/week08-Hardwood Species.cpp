#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char tree[1000000][32];	///�Ȧr��᭱��\0�S���ǳƦn,�ҥH�}�j�@�I,30->32

int compare( const void *p1 , const void *p2 )
{
	return strcmp( (char*)p1 , (char*)p2 );
}

int main()
{
	int T;///test case���ո�Ʀ��X��
	scanf("%d\n\n",&T);
	///	   �|��᭱2�Ӹ���Y��

	int N = 0;

	for( int i = 0 ;	; i++ )
	{
		char* now = gets( tree[i] );
///		�@��Ū�@���,��gets() , �����scanf()

		if( now == NULL )///Ū�J����
		{
			N = i;
			break;
		}

		if( strcmp( tree[i] , "" ) == 0 )///�ťզ�
		{
			N = i;
			break;
		}
	}

	qsort( tree , N , 32 , compare );

	printf("%s ",tree[0]);
	int ans = 1; ///�q1�}�l��(�S���s��1��)

	for( int i = 0 ; i < N - 1 ; i++ )
	{
		if( strcmp( tree[i] , tree[i+1] ) != 0 )
		{///���P��
			printf("%.4f\n", 100 * ( ans / (float)N ) );
			printf("%s ",tree[i+1]);
			ans = 1;
		}
		else ans++; ///�ۦP��
	}

	printf("%.4f\n", 100 * ( ans / (float)N ) );
}
