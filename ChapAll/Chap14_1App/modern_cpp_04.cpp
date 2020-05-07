#include <iostream>
#include <vector>
#include <map>

using namespace std;

enum ITEMTYPE : short {
	WEAPON,
	EQUIPMENT,
	GEM = 10,
	DEFENSE
};

class TEST {
public:

	TEST() { ; }
	TEST(int an1, string as1) :n1(an1), s1(as1) { ; }
	void print() {
		cout << n1 << "," << s1 << endl;
	}
private:
	int n1 = 100;
	string s1 = "test class";
};

class TEST2 {
public:
	void fi(int i) { cout << i << endl; }
	void f1(double d) = delete;
};

void func(int a) { cout << "func int " << a << endl; }
void func(double* p) { cout << "func double" << *p << endl; }

//int sum(initializer_list<int> li)
//{
//	//return accumulate(li.begin(), li.end(), 0);
//}

class Base {
public:
	virtual void foo(int i);
};

class Derived : Base
{
	virtual void foo(int i) override; //
};

constexpr double pow(double x, size_t y)
{
	return y != 1 ? x * pow(x, y - 1) : x;
}

int main() {
	cout << pow(2.0, 2) << endl;
	auto ITEMTYPE1 = EQUIPMENT;

	cout << "ITEMTYPE1 = " << static_cast<short>(ITEMTYPE1) << endl;
	char* p = nullptr;

	func(0);
	//func(NULL);
	//func(nullptr);

	cout << "size of nullptr" << sizeof(nullptr) << endl;
	cout << "type of nullptr" << typeid(nullptr).name() << endl;

	TEST test1(200, "new test");
	TEST test2;

	test1.print();
	test2.print();

	TEST test3{ 300,"ป๏น้" };
	test3.print();
	
	string str1{ "Hello!" };

	pair<int, string>g1(400, "ป็น้");
	vector<int> v1{ 1,2,3,4,5, };

	map<string, int> m = { pair<string,int>{"ภฯ",1} };

	string str = "Hello~";
	vector<string> v8;
	v8.push_back(str);

	for (auto& i : v8)
	{
		cout << i;
	}
	cout << endl;

	
	v8.push_back({ str[0],'e' });

	

	return 0;

}