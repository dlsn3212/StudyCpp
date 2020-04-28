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
		printf("이름 %s, 나이 %d\n", name, age);
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
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
	void report() {
		printf("이름 : %s, 나이 : %d세, 학번 : %d 보고서 제출\n", name, age, stunum);
	}
	void intro() {
		Human::intro();
		printf("학번:%d,이름:%s\n", stunum, name);
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
		printf("%s를 연구하고 논문을 쓴다.\n", thesis);
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
		printf("키 %d이고 몸무게 %d인 %s입니다.", height, weight, name);
	}
	void fight() {
		puts("레프트,라이트,쨉쨉");
	}
};

int main() {
	Human son("손유진", 25);
	son.intro();
	Student jin("김유진", 20, 15);
	jin.intro();
	jin.study();
	jin.report();
	Graduate s("손유진", 25, 15, "렌더링 기법");
	s.intro();
	s.research();

	Boxer park("박종팔", 61, 178, 65);
	park.intro();
	park.fight();
}