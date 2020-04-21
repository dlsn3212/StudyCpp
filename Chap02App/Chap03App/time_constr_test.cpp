#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int hour, int min, int sec)
	{
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}

	Time(int hour, int min)
	{
		this->hour = hour;
		this->min = min;
		this->sec = 0;
	}

	Time(int absec)
	{
		this->hour = absec / 3600;
		this->min = (absec / 60) % 60;
		this->sec = absec % 60;
	}
	void OutTime()
	{
		printf("���� �ð��� %d:%d:%d �Դϴ�.\n", this->hour, this->min, this->sec);
	}
};

int main()
{
	Time now = Time(16, 57, 45);
	now.OutTime();
	Time sharp = Time(16, 58);
	sharp.OutTime();
	Time noon = Time(43200);
	noon.OutTime();
}