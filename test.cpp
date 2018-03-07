#include <iostream>
#include "TwoUtils.h"

int main()
{
	std::vector<double> vector = { 2 };
	std::cout << "Media: " << LibTwoUtils::sample_mean(vector) << std::endl;
	std::cout << "Massimo: " << LibTwoUtils::find_max(vector) << std::endl;
	if (LibTwoUtils::sample_mean(vector) == 0)
		if (LibTwoUtils::find_max(vector) != 0)
			return 0;
		else return 1;
	else return 0;
}
