#include <stdio.h>

class Human {
public:
	char name[12];
	int age;

	void intro() {
		printf("�̸� %s, ���� %d\n", name, age);
	}
};

int main() {
	/*Human h = { "������",25 };
	h.intro();*/

	Human arFriend[10] = {
		{"������", 49},
		{"������",45},
		{"�ڻ�",30}
	};

	Human* pFriend;
	return 0;
}
