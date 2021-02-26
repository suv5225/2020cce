# 2020cce
大一下程式設計


## 第一個 基礎-找零錢

```c
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int coin50 = n / 50;
	int coin5 = ( n % 50 ) / 5;
	int coin1 = ( n % 50 ) % 5;

	printf("%d=50*%d+5*%d+1*%d\n",n,coin50,coin5,coin1);
}
```

## 第二個 基礎-因數個數

```c
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	int r = 0;

	for( int i = 1 ; i <= n ; i++ )
	{
		if( n % i == 0 )
		{
			r++;
		}
	}

	printf("%d\n",r);
}
```

## 第三個

```c


```


## 第四個

```c


```


## 第五個 進階-分式化簡

```c
#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	int temp;

	if( a > b )
	{
		for( int i = 1 ; i <= a ; i++ )
		{
			if( a % i == 0 && b % i == 0 )
			{
				temp = i;
			}
		}
	}

	else if( b > a )
	{
		for( int i = 1 ; i <= b ; i++ )
		{
			if( a % i == 0 && b % i == 0 )
			{
				temp = i;
			}
		}
	}

	a = a / temp;
	b = b / temp;

	printf("%d %d\n",a,b);
}
```

## 第六個

```c


```


## 第七個

```c


```

## 第八個

```c


```

