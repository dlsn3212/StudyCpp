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
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (num <= 0)throw num;

		try
		{
			printf("�̸��� �Է��ϼ��� : ");
			scanf("%s", name);
			if (strlen(name) < 4)throw name;
			printf("���̸� �Է��ϼ��� : ");
			scanf("%d", &age);
			if (age <= 0)throw age;
			try
			{
				printf("Ű�� �Է��ϼ��� : ");
				scanf("%d", &height);
				if (height <= 0) throw height;
			}
			catch (int a)
			{
				throw;
			}
			printf("�Է��� ����, �й� %d, �̸� %s, ���� %d\n", num, name, age);
		}
		catch (const char* msg)
		{
			printf("[Err!]  %s�� �̸��� �ʹ� ª���ϴ�.", name);
		}
		catch (int) 
		{
			throw;
		}
	}
	catch (int n)
	{
		printf("[Err]%d�� 0�Ǵ� ������ �������� ����\n", n);
	}
}