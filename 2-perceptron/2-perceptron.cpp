// 2-perceptron.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <memory>
#include "perceptron.h"


int main()
{
    float learning_rate = 1;
    std::vector<std::pair<double, double>> data = {
        {3,3},
        {4,3},
        {1,1}
    };

    std::unique_ptr<Perceptron> pt = std::make_unique<Perceptron>();
    pt->train(learning_rate, data);
    pt->print_result();

    return 0;
}


