#include <iostream>
#include "TwoUtils.h"

int main()
{
	std::vector<double> vector = {-4.5, 5.8, 6.9 ,7.5, 11, 25.9 , -13.5 };
	std::cout << "Media: " << LibTwoUtils::sample_mean(vector) << std::endl;
	std::cout << "Massimo: " << LibTwoUtils::find_max(vector) << std::endl;
	return LibTwoUtils::sample_mean(vector) || LibTwoUtils::find_max(vector);
}
