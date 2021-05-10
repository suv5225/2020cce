#include <stdio.h>

char line[2000];

int main()
{   ///Step01: Input: 一次一整行 , 很多個一整行
    for( int t = 0 ; gets( line ) ; t++ )
    {
        ///Step02: Output: 對應印出來

        if( t > 0 ) printf("\n");

        printf("blahblahblah\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
    }

}
