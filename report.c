#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num = 0;
	printf("점수를 입력해주세요. \n");
	scanf("%d", &num);

	switch (num / 10)
	{
	case 10: case 9:
		printf("A학점 입니다. \n");
		break;
	case 8:
		printf("B학점 입니다. \n");
		break;
	case 7:
		printf("C학점 입니다. \n");
		break;
	case 6:
		printf("D학점 입니다. \n");
		break;
	default:
		printf("F학점 입니다. \n");
		break;
	}
}