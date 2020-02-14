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
        std::cout << "No neuron with such position: " << neuron_position << std::endl;
        return;
    }
    else
    {
        this->neuron_mode[(std::vector<int>::size_type)neuron_position] = mode;
    }
}

void SNNE::SetMode(std::vector<int> neuron_position, SNNE::Mode mode)
{
    for (std::vector<int>::size_type i = 0; i < neuron_position.size(); i++)
    {
        // Use loop to set all neuron mode trough this->setMode(int, SNNE::Mode)
        this->SetMode(neuron_position[i],mode);
    }
    
}