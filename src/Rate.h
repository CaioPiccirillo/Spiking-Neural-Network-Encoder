#include <vector>
#include <chrono>
#include <iostream>

// Time defined in milliseconds
#define SPIKE_DURATION 100

class Rate
{
private:
    //
    std::vector<int> *neuron_trace;
    //
    std::vector<bool> *neuron_output;

public:
    Rate(std::vector<int> *neuron_trace, std::vector<bool> *neuron_output);
    ~Rate();
    void Start();
};