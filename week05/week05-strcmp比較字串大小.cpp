#include <stdio.h>
#include <string.h>

/*
    strcmp( a , b )����r��j�p ,
    �ۦP�^��0
    a < b �^�Ǥp��0����
    a > b �^�Ǥj��0����

*/
int main()
{
    char line[10] = "majority";
    char line2[10] = "ask";

    if( strcmp( line , line2 ) > 0 )
    {
        printf("����j\n");
    }

    else
    {
        printf("�k��j\n");
    }

}

