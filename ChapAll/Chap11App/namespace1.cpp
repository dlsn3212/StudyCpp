#include <stdio.h>
#include <iostream>

using namespace std;


class OtherClass {
public:
	void OutTime() { printf("!!!"); }
};
namespace A {
	double value;
}
namespace B{
	int value;
}
int value;

using namespace B;

int main() {
	A::value = 3.141592;
	B::value = 3;

	
	
	B::value = 10;

	//value = 1;
	::value = 12;
	
	cout << " " <<"\n" ;


}