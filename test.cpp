#include <iostream>
#include "TwoUtils.h"

int main()
{
	std::vector<double> vector = { -98,-5,-11,-12,-124.43,-54, -1 };
	std::cout << "Media: " << LibTwoUtils::sample_mean(vector) << std::endl;
	std::cout << "Massimo: " << LibTwoUtils::find_max(vector) << std::endl;
	return 0;
}