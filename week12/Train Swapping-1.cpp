
#include <stdio.h>

int a[100];

int main()
{
	int T; /// 有幾筆測資
	scanf("%d",&T);

	for( int t = 0 ; t < T ; t++ )
	{
		int n;
		scanf("%d",&n); /// 火車的長度

		for( int i = 0 ; i < n ; i++ ) /// 火車怎麼排
		{
			scanf("%d",&a[i]);
		}

		int ans = 0;

		printf("Optimal train swapping takes %d swaps.\n",ans);

	}



}

