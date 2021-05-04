#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[1000];
char tree[1000000][32]; ///step04: tree陣列

int compare( const void *p1 , const void *p2 )
{
	return strcmp( (char*)p1 , (char*)p2 );
}

int main()
{
	int T;
	scanf("%d\n\n",&T); ///step01: 讀資料

	for( int t = 0 ; t < T ; t++ ) ///step01: 讀資料 gets() 一次讀一整行
	{
		int N = 0; ///需要知道有機棵樹

		while( gets(line) != NULL ) ///step02: 讀失敗會變NULL
		{
			if( strcmp(line , "" ) == 0 ) break; ///讀到空行也要離開

			strcpy( tree[N] , line ); ///step04: 把樹的名字放到tree裡面

			N++; ///step03: 統計樹的數目

		}

		///step05: 照樹的名字來排序 => step04: 陣列在哪裡

		qsort( tree , N , 32 , compare ); ///step05: qsort

		if( t > 0 ) printf("\n"); ///step07" 每筆"新資料"前面要空行,最開始的那筆資料前面不用

		int ans = 1; ///新的開始
		printf("%s ",tree[0]);

		for( int i = 0 ; i < N - 1 ; i++ ) ///step06: 印答案ans
		{///相同時
			if( strcmp( tree[i] , tree[i+1] ) == 0 )	ans++;

			else	///不同時
			{
				printf("%.4f\n", ans / (float)N * 100 );
				printf("%s ",tree[i+1]);
				ans = 1;
			}

		}

		printf("%.4f\n", ans / (float)N * 100 );

	}

}
