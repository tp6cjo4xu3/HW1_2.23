#include <stdio.h>
#include <stdlib.h>
int a, b, c,d;
int main(void)
{
	printf("�п�J3�Ӿ��");
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
	printf("�̤j��:");
	printf("%d", a);
	printf("�̤p��:%d", c);
	system("pause");
	return 0;
}