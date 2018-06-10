#include "stdio.h"
#define PI 3.14
int main()
{
	int r;
	printf("请输入圆的半径：");
	scanf_s("%d", &r);
	printf("圆周长为：%.3lf\n", 2 * r*PI);
		printf("圆面积为：%.3lf\n", PI*r*r);
		printf("球体积为：%.3lf\n", 4 / 3 * PI*r*r*r);
	return 0;
}