#include <stdio.h>

class Int100 {
private:
	int num;
public:
	Int100(int a) try:num(a) {
		if (a <= 100) {
			num = a;
		}
		else {
			throw a;
		}
	}
	catch (int a) {
		printf("[ERROR] %d�� 100���� ŭ\n", a);
	}

	Int100 & operator +=(int b) {
		if (num + b <= 100) {
			num += b;
		}
		else {
			throw num + b;
		}
		return *this;
	}
	void OutValue() {
		printf("%d\n", num);
	}
};
int main() {
	try
	{
		Int100 i(919);
		i += 12;
		i.OutValue();
	}
	catch (int n)
	{
		printf("��ȿ�� ��ü\n", n);
	}
}