#include "stdio.h"
#define PI 3.14
int main()
{
	int r;
	printf("������Բ�İ뾶��");
	scanf_s("%d", &r);
	printf("Բ�ܳ�Ϊ��%.3lf\n", 2 * r*PI);
		printf("Բ���Ϊ��%.3lf\n", PI*r*r);
		printf("�����Ϊ��%.3lf\n", 4 / 3 * PI*r*r*r);
	return 0;
}