#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		printf("�̸� %s, ���� %d\n", name, age);
	}
};

class Student : public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum):Human(aname,aage) {
		stunum = astunum;

	}
	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
	void report() {
		printf("�̸� : %s, ���� : %d��, �й� : %d ���� ����\n", name, age, stunum);
	}
	void intro() {
		Human::intro();
		printf("�й�:%d,�̸�:%s\n", stunum, name);
	}
};

class Graduate : public Student {
protected:
	char thesis[40];
public:
	Graduate(const char* aname, int aage, int astnum, const char* athesis) : Student(aname, aage, astnum) {
		strcpy(thesis, athesis);
	}
	void research() {
		printf("%s�� �����ϰ� ���� ����.\n", thesis);
	}
};

class Boxer :public Human {
protected:
	int height, weight;
public:
	Boxer(const char* aname, int aage, int aheight, int aweight) :Human(aname,aage) {
		height = aheight;
		weight = aweight;

	}
	void intro() {
		printf("Ű %d�̰� ������ %d�� %s�Դϴ�.", height, weight, name);
	}
	void fight() {
		puts("����Ʈ,����Ʈ,µµ");
	}
};

int main() {
	Human son("������", 25);
	son.intro();
	Student jin("������", 20, 15);
	jin.intro();
	jin.study();
	jin.report();
	Graduate s("������", 25, 15, "������ ���");
	s.intro();
	s.research();

	Boxer park("������", 61, 178, 65);
	park.intro();
	park.fight();
}