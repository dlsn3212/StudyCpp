#include <stdio.h>
#include <stdexcept>
#include <limits>
#include <iostream>
#include <exception>
using namespace std;

/*
void MyFunc(int c) {
	if (c > 255)
		throw invalid_argument("MyFunc argument too large.");
}
int main()
{
	try
	{
		MyFunc(256);
	}
	catch (invalid_argument &e)
	{
		cerr << e.what() << endl;
		return -1;
	}
}
*/

void myterm() {
	puts("예외발생");
	exit(-1);
}

int main()
{
	set_terminate(myterm);
	try
	{
		if(true) throw 1234;
	}
	catch (unsigned a)
	{
		printf("%d에 대한 예외 발생\n", a);
	}
}