#include <stdio.h>

template <typename T>

void Swap(T& a, T& b) {
	T t;
	t = a; a = b; b = t;
}

template <typename T>
T add(T& a, T& b) {
	return a + b;
}
int main() {
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';
	Swap(a, b);
	Swap(c, d);
	Swap(e, f);
	printf("a = %d,   b = %d\n", a, b);
	printf("c = %.1f, d = %.1f\n", c, d);
	printf("e = %c,   f = %c\n", e, f);
	
	printf("a + b = %d\n", add(a, b));
	printf("c + d = %.1f\n", add(c, d));
	printf("e + f = %d\n", add(e, f));
}