#include<stdio.h>

void divide(int a, int d) {
	if (d == 0)throw "0���δ� ���� �Ұ�";
	printf("������ ��� %d\n", a / d);
}

int main() {
	try
	{
		divide(10, 0);
	}
	catch (const char* msg)
	{
		puts(msg);
	}
	return 0;
}