#include <stdio.h>
#include <string>

using namespace std;

int main() {
	char str[] = "string";
	string str2 = "string";
	const char* c1 = str;
	char* c2;

	c2 = const_cast<char*>(c1);
	c2[0] = 'a';
	puts(c2);

	return 0;

}