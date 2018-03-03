#include <algorithm>
#include <iostream>
#include <cmath>
#include "TwoUtils.h"

/****************** Function Definitions *******************************/

/*
* Evaluate the sample mean of the input samples.
*
* Input: a vector containing samples.
* Return : the sample mean.
*/
double LibTwoUtils::sample_mean(const std::vector<double>& sample)
{
	double sum = 0;
	double mean;
	std::vector<double>::const_iterator it;
	if (sample.size() == 0)										// Protection against an empty vector
	{
		std::cout << "Error! Sample is empty" << std::endl;		
		abort();
	}
	else for (it = sample.begin(); it != sample.end(); it++)	// Add all the values ​​of the vector by moving the iterator
		sum+=*it;
	mean = sum / sample.size();									// Calculation of the sample mean
	return mean;
}


/*
* Find the maximum value of a given vector.
*
* Input: a vector containing numbers.
* Return: the maximum value.
*/
double LibTwoUtils::find_max(const std::vector<double>& vec)
{
	std::vector<double>::const_iterator max;					
	if (vec.size() == 0)										// Protection against an empty vector
	{
		std::cout << "Error! Vector is empty" << std::endl;
		abort();
	}
	max = std::max_element(vec.begin(), vec.end());				// Find the maximum value
	return *max;
}