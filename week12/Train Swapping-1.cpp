
#include <stdio.h>

int a[100];

int main()
{
	int T; /// ���X������
	scanf("%d",&T);

	for( int t = 0 ; t < T ; t++ )
	{
		int n;
		scanf("%d",&n); /// ����������

		for( int i = 0 ; i < n ; i++ ) /// ��������
		{
			scanf("%d",&a[i]);
		}

		int ans = 0;

		printf("Optimal train swapping takes %d swaps.\n",ans);

	}



}

