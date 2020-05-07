#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

/*
class Human
{
public:
	char name[12];
	int age;

	void intro() {
		printf("%s,%d", name, age);
	}
};

int main() {
	Human Kim = { "김상형",24 };
	Kim.intro();
}
*/

/*
class Date {
private:
	int year, mon, day;

public:
	//Date(int y, int m, int d) :year(y), mon(m), day(d) { ; }

	void SetDate(int y, int n, int d) {
		year = y;
		mon = n;
		day = d;
	}

	void intro() {
		printf("오늘 날짜 : %d/%d/%d", year, mon, day);
	}
};
int main() {

	//Date today(20,04,29);
	//today.intro();

	Date today;
	today.SetDate(2020, 04, 29);
	today.intro();
	
}
*/

/*
struct SHuman
{
private:
	char Name[12];
	int age;

public:
	SHuman() { ; }
	SHuman(const char* n, int a) {
		strcpy(Name, n);
		age = a;
	}

	void setName(const char* n, int a) {
		
		if (strlen(n) < 12)
		{
			strcpy(Name, n);
		}
		else
		{
			strcpy(Name, "비어있음");
			printf("이름이 잘못입력...");
		}

		age = a;
	}

	void intro() {
		printf("%s,%d\n", Name, age);
	}
};

int main() {
	SHuman h;
	h.setName("김수한무거북이와두루미", 23);
	h.intro();
}
*/

/*
using namespace std;

class Person {
public:

	string name;
	int number;
	Person(string name, int number)
	{
		this->name = name;
		this->number = number;
	}

	bool operator <(Person& person) {
		
		return this->number < person.number;
	}
};

int main()
{
	Person people[] = {
		Person("박문규",5),
		Person("박진",3),
		Person("신소민",4),
		Person("조승균",1),
		Person("임선정",2)
	};
	
	sort(people, people + 5);
	for (int i = 0; i < 5; i++)
	{
		cout << people[i].name << ' ';
		cout << people[i].number << ' ';
	}
}
*/


template <typename T>

class Vector {
	T* data;
	int capacity;
	int length;

public:
	//어떤 타입을 보관하는지
	typedef T value_type;

	//생성자
	Vector(int n = 1) :data(new T[n]), capacity(n), length(0) { ; }

	//맨뒤에 새로운 원소 추가
	void push_back(T s) {		
		if (capacity <= length) 
		{
			T* temp = new T[capacity * 2];
			for (int i = 0; i < length; i++) 
			{
				temp[i] = data[i];
			}

			delete[] data;
			data = temp;
			capacity *= 2;
		}

		data[length] = s;
		length++;

	}

	//원소 접근
	T operator[](int i) { return data[i]; } 

	//x번째 위치한 원소 삭제
	void remove(int x)	
	{
		for (int i = x + 1; i < length; i++)
		{
			data[i - 1] = data[i];
		}
		length--;
	}

	//현재 벡터의 크기 구하기
	int size() { return length; } 

	~Vector()
	{
		if (data) {
			delete[] data;
		}
	}
};



template <>
class Vector<bool> {
	unsigned int* data;
	int capacity;
	int length;

};

int main() {
	Vector<int> int_vec;
	int_vec.push_back(3);
	int_vec.push_back(2);
	
	cout << "첫번째 원소 : " << int_vec[0] << endl;
	cout << "두번째 원소 : " << int_vec[1] << endl;


	Vector<string> str_vec;
	str_vec.push_back("hello");
	str_vec.push_back("world!");

	cout << "첫번째 원소 : " << str_vec[0] << endl;
	cout << "두번째 원소 : " << str_vec[1] << endl;
}