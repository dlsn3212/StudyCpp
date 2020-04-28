#include <stdio.h>

int main() {
	int a, b;
	try
	{
		printf("나누어질 수를 입력하시오 : ");
		scanf("%d", &a);
		if (a < 0) throw a;
		printf("나누는 수를 입력하시오 : ");
		scanf("%d", &b);
		if (b == 0) throw b;
		printf("나누기 결과는 %d입니다.\n", a / b);
		
	}
	catch (int a)
	{
		printf("%d는 음수이거나 0으로 연산 불가\n", a);
	}
	catch (double b)
	{
		printf("~", b);
	}
	
	catch (const char* message) {
		puts(message);
	}
		
}