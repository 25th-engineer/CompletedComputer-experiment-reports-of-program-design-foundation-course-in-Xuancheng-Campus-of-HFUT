#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("char\t\t = %d \t\tByte\n",sizeof(char));
    printf("int\t\t  = %d \t\tByte\n",sizeof(int));
	printf("float\t\t  = %d \t\tByte\n",sizeof(float));
	printf("double\t\t  = %d \t\tByte\n",sizeof(double));
	printf("long\t\t  = %d \t\tByte\n",sizeof(long));
	printf("short\t\t  = %d \t\tByte\n",sizeof(short));
	printf("unsigned short\t\t  = %d \t\tByte\n",sizeof(unsigned short));
	printf("unsigned long\t\t  = %d \t\tByte\n",sizeof(unsigned long));
    return 0;
}
