#include <stdio.h>
#include <string.h>

/*
    strcmp( a , b )比較字串大小 ,
    相同回傳0
    a < b 回傳小於0的值
    a > b 回傳大於0的值

*/
int main()
{
    char line[10] = "majority";
    char line2[10] = "ask";

    if( strcmp( line , line2 ) > 0 )
    {
        printf("左邊大\n");
    }

    else
    {
        printf("右邊大\n");
    }

}

