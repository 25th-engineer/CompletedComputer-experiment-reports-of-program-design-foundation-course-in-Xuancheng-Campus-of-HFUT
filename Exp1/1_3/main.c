#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("正数mod负数 %d\n",78%(-5));
    printf("负数mod正数 %d\n",(-23)%6);
    printf("负数mod负数 %d\n",(-73)%(-23));
    return 0;
}
