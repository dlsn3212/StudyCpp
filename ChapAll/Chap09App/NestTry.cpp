#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	int num;
	int age;
	char name[128];
	int height;

	try
	{
		printf("학번을 입력하시오 : ");
		scanf("%d", &num);
		if (num <= 0)throw num;

		try
		{
			printf("이름을 입력하세요 : ");
			scanf("%s", name);
			if (strlen(name) < 4)throw name;
			printf("나이를 입력하세요 : ");
			scanf("%d", &age);
			if (age <= 0)throw age;
			try
			{
				printf("키를 입력하세요 : ");
				scanf("%d", &height);
				if (height <= 0) throw height;
			}
			catch (int a)
			{
				throw;
			}
			printf("입력한 정보, 학번 %d, 이름 %s, 나이 %d\n", num, name, age);
		}
		catch (const char* msg)
		{
			printf("[Err!]  %s는 이름이 너무 짧습니다.", name);
		}
		catch (int) 
		{
			throw;
		}
	}
	catch (int n)
	{
		printf("[Err]%d는 0또는 음수로 적합하지 않음\n", n);
	}
}