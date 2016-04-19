#include <stdlib.h>
#include <string.h>
#include <iostream>

void fun(const int(&arr)[5])
{
	std::cout<<sizeof(arr)<<std::endl;
}

template<unsigned N>
void funT(const double(&arr)[N])
{
	std::cout<<"Template:"<<sizeof(arr)<<std::endl;
}

int main()
{
	int testArray[5] = {0,};
	fun(testArray);

	double dArr1[10] = {0., };
	double dArr2[20] = {0.,};

	funT(dArr1);
	funT(dArr2);

}
