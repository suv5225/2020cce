#include <stdio.h>
#include <stdlib.h>

char line[2000];
int ans[256]; ///Step03: �έp���X�Ӧr�� ex.ans[65] = 3 ���'A' ��3��

int main()
{   ///Step01: Input: �@���@��� , �ܦh�Ӥ@���
    for( int t = 0 ; gets( line ) ; t++ )
    {
        for( int i = 0 ; i < 256 ; i++ )    ans[i] = 0; ///Step03: �M���b

        for( int i = 0 ; line[i] != 0 ; i++ ) ///�r�ꪺ�j��
        {
            char c = line[i]; ///Step04: ��i�Ӧr��
            ans[c]++; ///Step04: �έp��ans[]�̭�
        }


        ///Step02: Output: �����L�X��
        if( t > 0 ) printf("\n");

        for( int i = 0 ; i < 256 ; i++ )
        {
            if( ans[i] > 0 )    printf("%d %d\n",i,ans[i]);
        }


    }

}
