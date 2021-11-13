#include <iostream>
#include "Pimpl.h"

int main()
{
	widget w1(5);
	widget w2(w1);
	widget w3(0);
	w3 = w2;

	w1.draw();
	w2.draw();
	w3.draw();

	system("pause");
	return 0;
}

