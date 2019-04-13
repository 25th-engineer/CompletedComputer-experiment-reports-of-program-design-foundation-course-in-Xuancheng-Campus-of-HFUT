#include <stdio.h>

int main(int argc, char* argv[])
{
	int n;
	scanf("%d", &n);
	n = n / 10;
	//printf("%d",n);
	switch(n)
	{
    case(0):
        printf("儿童\n");
        break;
	case(1):
		printf("青少年\n");
		break;
	case(2):
		printf("青年\n");
		break;
	case(3):
		printf("青年\n");
		break;
	case(4):
		printf("中年\n");
		break;
	case(5):
		printf("中年\n");
		break;
	case(6):
		printf("老年\n");
		break;
	default:
	    printf("老年\n");
		break;

	}
	return 0;
}
