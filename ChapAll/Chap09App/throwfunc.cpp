#include<stdio.h>

void divide(int a, int d) {
	if (d == 0)throw "0으로는 연산 불가";
	printf("나누기 결과 %d\n", a / d);
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