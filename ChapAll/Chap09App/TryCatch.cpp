#include <stdio.h>

int main() {
	int a, b;
	try
	{
		printf("�������� ���� �Է��Ͻÿ� : ");
		scanf("%d", &a);
		if (a < 0) throw a;
		printf("������ ���� �Է��Ͻÿ� : ");
		scanf("%d", &b);
		if (b == 0) throw b;
		printf("������ ����� %d�Դϴ�.\n", a / b);
		
	}
	catch (int a)
	{
		printf("%d�� �����̰ų� 0���� ���� �Ұ�\n", a);
	}
	catch (double b)
	{
		printf("~", b);
	}
	
	catch (const char* message) {
		puts(message);
	}
		
}