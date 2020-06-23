#include "perceptron.h"
#include <iostream>

void Perceptron::train(float learning_rate, std::vector<std::pair<double, double>> &data)
{
	w = 0;
	b = 0;

	for (auto d : data) {
		if (d.second * (w * d.first + b) <= 0) {
			w += learning_rate * d.first * d.second;
			b += learning_rate * d.second;
		}
	}
}

void Perceptron::print_result()
{
	std::cout << "y = " << w << " x + " << b << std::endl;
}
