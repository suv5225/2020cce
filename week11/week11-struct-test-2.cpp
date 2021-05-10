#include <stdio.h>

typedef struct data
{
    int ans;
    char c;

}DATA; /// DATA 是 struct data 的新名字
DATA box;

int main()
{
    box.ans = 1;
    box.c = 'A';

    printf("%c %d\n", box.c , box.ans );
}
