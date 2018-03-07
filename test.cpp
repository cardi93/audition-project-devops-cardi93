#include <iostream>
#include "TwoUtils.h"

int main()
{
	std::vector<double> vector = {  };
	std::cout << "Media: " << LibTwoUtils::sample_mean(vector) << std::endl;
	std::cout << "Massimo: " << LibTwoUtils::find_max(vector) << std::endl;
	return LibTwoUtils::sample_mean(vector) || LibTwoUtils::find_max(vector);
}