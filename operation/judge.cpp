#include"stdio.h"
int main()
{
	float a, b, c;
	printf("�����������ε������ߣ�");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c&&a + c > b&&c + b > a)
		printf("���Թ���������");
	else
		printf("�����Թ���������");
	return 0;
}