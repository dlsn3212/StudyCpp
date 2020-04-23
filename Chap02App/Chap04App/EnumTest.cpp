#include <stdio.h>

enum Color
{
	Black,
	White,
	Red,
	Green,
	Blue,
	Aqua
};

class Test {
private:
	Color mycol;
public:
	Test() {
		//mycol = Color(5);
		mycol = Color::Aqua;
	}
	void OutColor()
	{
		printf("%d", mycol);
	}
};

int main() {
	Test T;
	T.OutColor();
}