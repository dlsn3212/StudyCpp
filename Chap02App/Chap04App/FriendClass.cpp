#include <stdio.h>


class Time
{
	friend class Date;
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		if (h >= 0 && h < 24) { hour = h; }
		else { hour = 0; }
		if (m >= 0 && m < 60) { min = m; }
		else { min = 0; }
		if (s >= 0 && s < 60) { sec = s; }
		else { sec = 0; }
	}
};

class Date
{
private:
	int year, mon, day;
public:
	Date(int y, int m, int d) {
		if (y >= 1900 && y <= 9999) { year = y; }
		else { year = 1900; }
		if (m >= 1 && m <= 12) { mon = m; }
		else { mon = 0; }
		if (d >= 1 && d <= 31) { day = d; }
		else { day = 0; }
	}
	void OutToday(Time& t) {
		printf("%d년 %d월 %d일 / %d시 %d분 %d초\n", year, mon, day,
			t.hour, t.min, t.sec);
	}
};


int main()
{
	Date d(2020, 04, 22);
	Time t(12, 34, 56);
	d.OutToday(t);
}