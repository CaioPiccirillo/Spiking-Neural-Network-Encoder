#include "Rate.h"

Rate::Rate(int *neuron_trace, char *neuron_output)
{
    this->neuron_trace = neuron_trace;
    this->neuron_output = neuron_output;
}

Rate::~Rate()
{
}

void Rate::Start()
{
    if (*this->neuron_output == 0)
    {
        *this->neuron_output = 1;
    }
    else
    {
        *this->neuron_output = 0;
    }
}