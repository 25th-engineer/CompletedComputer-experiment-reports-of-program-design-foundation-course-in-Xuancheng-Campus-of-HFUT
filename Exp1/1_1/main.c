#include <stdio.h>

int main(int argc, char* argv[])
{
    char c1,c2;
    c1 = 'a';
    c2 = 'b';
    c1 = c1 - 32; //不同类型数据的运算
    c2 = c2 - 32;
    printf("%c, %c\n", c1, c2);

    return 0;
}
