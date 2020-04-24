#include <stdio.h>

class Time {
	//friend const Time operator+(const Time& me, const Time& other);
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) : hour(h), min(m), sec(s) { ; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	
	const Time operator +(int s) const {
		Time t = *this;
		t.sec += s;
		t.min = t.min + t.sec / 60;
		t.sec = t.sec % 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}

	const Time operator * (const int s) const {
		Time t = *this;
		int tsec = t.hour * 3600 + t.min * 60 + t.sec;
		
		t.hour = tsec / 3600;
		t.min = (tsec / 60) % 60;
		t.sec = tsec % 60;
		return t;
	}
	bool operator ==(const Time& other) const {
		return (hour == other.hour && min == other.min && sec == other.sec);
	}
	bool operator !=(const Time& other) const {
		return !(*this == other);
	}
	bool operator >(const Time& other) const {
		if (hour > other.hour)return true;
		if (hour < other.hour)return false;
		if (min > other.min)return true;
		if (min < other.min)return false;
		if (sec > other.sec)return true;
		return false;
	}
	bool operator < (const Time& other)const {
		return !(*this >= other);
	}
	bool operator >=(const Time& other)const {
		return(*this == other || *this > other);
	}
	bool operator <=(const Time& other)const {
		return !(*this > other);
	}

};

const Time operator+(int s, const Time& me) {
	return (me + s);
}
const Time operator *(const int s, const Time& me) {
	return (me * s);
}
int main()
{
	Time t1(1, 40, 32), t2(2, 21, 33);
	Time t3;
	t1.OutTime();
	t2.OutTime();
	//t3 = t1 + t2;
	t3.OutTime();

	Time now;
	//now = 360+t3;
	now.OutTime();

	printf("����\n");
	Time cur(1, 20, 12);
	Time mul;
	mul = cur * 2;
	mul.OutTime();
}