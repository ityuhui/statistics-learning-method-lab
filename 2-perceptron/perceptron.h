#ifndef _PERCEPTRON_H
#define _PERCEPTRON_H

#include <vector>
#include <utility>

class Perceptron
{
public:
	void train(float, std::vector<std::pair<double, double>> &);
	void print_result();
private:
	double w;
	double b;
};

#endif // !_PERCEPTRON_H
