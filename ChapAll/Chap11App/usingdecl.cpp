#include <stdio.h>

namespace UTIL
{
	int value;
	double score;
	void sub() { puts("sub routine"); }
}

namespace VeryVeryLongNameSpaceName {
	int value;
}

int main() {
	using UTIL::value;
	namespace A = VeryVeryLongNameSpaceName;
	A::value = 2;

	value = 3;
	UTIL::score = 1.234;
	UTIL::sub();
}

void mysub() {
	UTIL::value = 5;

	int value = 5;
	value = 1;
}