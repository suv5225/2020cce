#include <stdio.h>
#include <stdlib.h>

char line[2000];
int ans[256]; ///Step03: 統計有幾個字母 ex.ans[65] = 3 表示'A' 有3次

int main()
{   ///Step01: Input: 一次一整行 , 很多個一整行
    for( int t = 0 ; gets( line ) ; t++ )
    {
        for( int i = 0 ; i < 256 ; i++ )    ans[i] = 0; ///Step03: 清乾淨

        for( int i = 0 ; line[i] != 0 ; i++ ) ///字串的迴圈
        {
            char c = line[i]; ///Step04: 第i個字母
            ans[c]++; ///Step04: 統計到ans[]裡面
        }


        ///Step02: Output: 對應印出來
        if( t > 0 ) printf("\n");

        for( int i = 0 ; i < 256 ; i++ )
        {
            if( ans[i] > 0 )    printf("%d %d\n",i,ans[i]);
        }


    }

}
