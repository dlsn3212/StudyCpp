#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

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
	Human Kim = { "�����",24 };
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
		printf("���� ��¥ : %d/%d/%d", year, mon, day);
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
			strcpy(Name, "�������");
			printf("�̸��� �߸��Է�...");
		}

		age = a;
	}

	void intro() {
		printf("%s,%d\n", Name, age);
	}
};

int main() {
	SHuman h;
	h.setName("����ѹ��ź��̿͵η��", 23);
	h.intro();
}
*/

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
		Person("�ڹ���",5),
		Person("����",3),
		Person("�żҹ�",4),
		Person("���±�",1),
		Person("�Ӽ���",2)
	};
	
	sort(people, people + 5);
	for (int i = 0; i < 5; i++)
	{
		cout << people[i].name << ' ';
		cout << people[i].number << ' ';
	}
}