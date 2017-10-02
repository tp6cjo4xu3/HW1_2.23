#include <stdio.h>
#include <stdlib.h>
int a, b, c,d;
int main(void)
{
	printf("請輸入3個整數");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b){
		d = b;
		b = a;
		a = d;
	}
	if (b < c){
		d = c;
		c = b;
		b = d;
	}
	if (a < b){
		d = b;
		b = a;
		a = d;
	}
	printf("最大值:");
	printf("%d", a);
	printf("最小值:%d", c);
	system("pause");
	return 0;
}