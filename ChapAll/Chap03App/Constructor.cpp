#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;
public:
	// 생성자
	Human(const char* name, int age)
	{
		strcpy(this->name, name);
		age = age;
	}
	void intro() {
		printf("이름 = %s 나이 = %d\n", this->name, this->age);
	}
};

int main()
{
	Human h = Human("손유진", 25);
	h.intro();
	return 0;
}