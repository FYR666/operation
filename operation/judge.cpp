#include"stdio.h"
int main()
{
	float a, b, c;
	printf("请输入三角形的三条边：");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c&&a + c > b&&c + b > a)
		printf("可以构成三角形");
	else
		printf("不可以构成三角形");
	return 0;
}