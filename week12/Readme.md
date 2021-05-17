## UVA11321   Sort!Sort!Sort

```c

#include <stdio.h>

int a[10000];

void swap( int i , int j ) /// 做交換 , 下面就不用寫那麼多次
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main()
{
	int N,M; /// N,M 讀入
	while( scanf("%d %d", &N , &M ) == 2 )
	{
		for( int i = 0 ; i < N ; i++ ) /// Input N行
		{
			scanf("%d",&a[i]);
		}

		for( int i = 0 ; i < N ; i++ )
        {
            for( int j = i + 1 ; j < N ; j++ )
            {
                if( a[i] % M > a[j] % M ) swap(i,j); /// Rule(1)
                if( a[i] %M == a[j] % M )
                {
                    if( a[i] % 2 == 0 && a[j] % 2 != 0 ) swap(i,j); /// 奇數要換上去
                    if( a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j] ) swap(i,j); ///奇數,大放前面
                    if( a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j] ) swap(i,j); ///偶數,小放前面
                }
            }
        }
	}

	printf("%d %d\n",N,M);
	for( int i = 0 ; i < N ; i++ )
	{
		printf("%d\n",a[i]);
	}

}


```
