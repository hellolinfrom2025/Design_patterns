// Adapter.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Adapter.h"
int main()
{
	Rect* rc = new AdapterRect(12.0,13.0,33.0,55.0);
	rc->Draw();
	delete rc;

	Rect* rc2 = new Adapter2Rect(12.0, 13.0, 33.0, 55.0);
	rc2->Draw();
	delete rc2;

	return 0;
}
