#include <stdio.h>

int main()
{
	int s;
	scanf("%d",&s);

	int h = s / 3600;
	int m = ( s % 3600 ) / 60;
	int s2 = ( s % 3600 ) % 60;
        ///����2��Ʒ|�ۤv��0
	printf("%02d:%02d:%02d",h,m,s2);


}
