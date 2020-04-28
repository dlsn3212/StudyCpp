#include <iostream>
#include "PosValue.h"

using namespace std;


template <typename T>
void PosValue<T>::outvalue()
{
	gotoxy(x, y);
	cout << value << endl;
}