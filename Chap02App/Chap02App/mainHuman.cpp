#include <stdio.h>

class Human {
public:
	char name[12];
	int age;

	void intro() {
		printf("이름 %s, 나이 %d\n", name, age);
	}
};

int main() {
	/*Human h = { "손유진",25 };
	h.intro();*/

	Human arFriend[10] = {
		{"문동욱", 49},
		{"김유진",45},
		{"박상막",30}
	};

	Human* pFriend;
	return 0;
}
