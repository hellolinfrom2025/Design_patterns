#include <iostream>
#include "FruitsFactory.h"
#define H_SPTR_VALID(ptr) (ptr&&ptr.get())

int main(int argc,char*argv[])
{
	std::shared_ptr<IFruits> ptrApple=FruitsFactory::Create(eFruitsCategory::kApple);
	if (H_SPTR_VALID(ptrApple)){
		std::cout<< ptrApple->ShowName().c_str()<<std::endl;
	}

	system("pause");
	return 0;
}