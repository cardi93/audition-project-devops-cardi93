#include <iostream>
#include "TwoUtils.h"

int main()
{
	std::vector<double> vector = { -12.5, 65.2, -48.5 ,84.4, 78.4, -23.5, 98.6 };
	std::cout << "Media: " << LibTwoUtils::sample_mean(vector) << std::endl;
	std::cout << "Massimo: " << LibTwoUtils::find_max(vector) << std::endl;
	return 0;
}