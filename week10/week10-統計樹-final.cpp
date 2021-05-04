#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[1000];
char tree[1000000][32]; ///step04: tree�}�C

int compare( const void *p1 , const void *p2 )
{
	return strcmp( (char*)p1 , (char*)p2 );
}

int main()
{
	int T;
	scanf("%d\n\n",&T); ///step01: Ū���

	for( int t = 0 ; t < T ; t++ ) ///step01: Ū��� gets() �@��Ū�@���
	{
		int N = 0; ///�ݭn���D�����ʾ�

		while( gets(line) != NULL ) ///step02: Ū���ѷ|��NULL
		{
			if( strcmp(line , "" ) == 0 ) break; ///Ū��Ŧ�]�n���}

			strcpy( tree[N] , line ); ///step04: ��𪺦W�r���tree�̭�

			N++; ///step03: �έp�𪺼ƥ�

		}

		///step05: �Ӿ𪺦W�r�ӱƧ� => step04: �}�C�b����

		qsort( tree , N , 32 , compare ); ///step05: qsort

		if( t > 0 ) printf("\n"); ///step07" �C��"�s���"�e���n�Ŧ�,�̶}�l��������ƫe������

		int ans = 1; ///�s���}�l
		printf("%s ",tree[0]);

		for( int i = 0 ; i < N - 1 ; i++ ) ///step06: �L����ans
		{///�ۦP��
			if( strcmp( tree[i] , tree[i+1] ) == 0 )	ans++;

			else	///���P��
			{
				printf("%.4f\n", ans / (float)N * 100 );
				printf("%s ",tree[i+1]);
				ans = 1;
			}

		}

		printf("%.4f\n", ans / (float)N * 100 );

	}

}
