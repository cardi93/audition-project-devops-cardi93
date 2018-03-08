#include <iostream>
#include "TwoUtils.h"

int main()
{
	std::vector<double> vector = { -8, -5, 6 , 11 };
	std::cout << "Media: " << LibTwoUtils::sample_mean(vector) << std::endl;
	std::cout << "Massimo: " << LibTwoUtils::find_max(vector) << std::endl;
	if (LibTwoUtils::sample_mean(vector) == 1)
		if (LibTwoUtils::find_max(vector) == 11)
			return 0;
		else return 1;
	else return 1;
}
