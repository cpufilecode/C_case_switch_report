#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num = 0;
	printf("������ �Է����ּ���. \n");
	scanf("%d", &num);

	switch (num / 10)
	{
	case 10: case 9:
		printf("A���� �Դϴ�. \n");
		break;
	case 8:
		printf("B���� �Դϴ�. \n");
		break;
	case 7:
		printf("C���� �Դϴ�. \n");
		break;
	case 6:
		printf("D���� �Դϴ�. \n");
		break;
	default:
		printf("F���� �Դϴ�. \n");
		break;
	}
}