#include <stdio.h>
#include "Time.h"


void Time::SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

void Time::outTime() {
		printf("���� �ð��� %d:%d:%d�Դϴ�\n", hour, min, sec);
	}


