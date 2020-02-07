#include "SNNE.h"

SNNE::SNNE(int number_of_neurons)
{
    this->neuron_output.resize(number_of_neurons);
    this->neuron_trace.resize(number_of_neurons);
}

SNNE::~SNNE()
{
}

void SNNE::Start()
{
}

void SNNE::Stop()
{
}

void SNNE::SetMode(int neuron_position, SNNE::Mode mode)
{
    // Check if position exists
    if (neuron_position > this->neuron_mode.size())
    {
        std::cout << "No neuron with such position" << std::endl;
        return;
    }
    else
    {
        this->neuron_mode[(std::vector<int>::size_type)neuron_position] = mode;
    }
}