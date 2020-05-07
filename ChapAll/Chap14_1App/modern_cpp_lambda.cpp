#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;


template<typename Func>

void Test(Func func,int n)
{
	func(n);
}

function<void()>f()
{
	string str("lambda");
	return [=] {cout << "Hello." << str << endl; };
}

class Foo {
public:
	int i;
	Foo() :i(0) { ; }
	void amaze() {
		[=] { i = 8; }();
	}
};

void PrintNum(int args, ...) {
	cout << args << endl;
}
int main() {
	PrintNum(1);

	auto Sum = [](auto a, auto b) {return a + b; };
	cout << Sum(3, 4) << endl;

	Foo foo;
	foo.amaze();
	cout << foo.i << endl;
	int num1 = 0;
	//auto func =[] (int n){cout << "Hello World" << endl; };

	//func(333);
	//func(777);
	getchar();

	auto func1 = [] {return 3.14; };
	auto func2 = [](float f) {return f; };
	auto func3 = []()->float {return 3.141592; };

	float f1 = func1(); cout << f1 << endl;
	float f2 = func2(3.141592); cout << f2 << endl;
	float f3 = func3(); cout << f3 << endl;


	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	for_each(v1.begin(), v1.end(),
		[](int n) {cout << n << endl; });

	auto func = f();
	func();
	f()();

	int x = 100;
	int y = 0;
	[=]() {cout << x << endl; }();
	[&]() {cout << x << endl; x = 400; }();
	[&x, &y] {x = 400, y = 500; cout << x << y << endl; }();
}