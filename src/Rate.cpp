#include "Rate.h"

Rate::Rate(int neuron_trace, bool neuron_output)
{
    this->neuron_trace = neuron_trace;
    this->neuron_output = neuron_output;
}

Rate::~Rate()
{
}

void Rate::Start()
{
    // for (std::vector<int>::size_type i = 0; i < this->neuron_output->size(); i++)
    // {
    //     auto now = std::chrono::steady_clock::now();
    //     auto duration = now.time_since_epoch();
    //     auto millis = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
    //     this->neuron_output->at(i) = 0;
    //     std::cout << i << std::endl;
    //     std::cout << neuron_output->at(i) << std::endl;
    //     std::cout << millis << std::endl;
    // }
}