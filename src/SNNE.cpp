#include "SNNE.h"

SNNE::SNNE(int number_of_neurons)
{
    // Resize vectors to match sizes
    this->neuron_output.resize(number_of_neurons);
    this->neuron_trace.resize(number_of_neurons);
    this->neurons.resize(number_of_neurons);
    // Begin outputs with zero
    std::fill(this->neuron_output.begin(), this->neuron_output.end(), 0);

    std::cout << timer.ElapsedTime() << std::endl;
}

SNNE::~SNNE()
{ /* data */
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
    if (neuron_position > this->neurons.size())
    {
        std::cout << "No neuron with such position: " << neuron_position << std::endl;
        return;
    }
    else
    {
        switch (mode)
        {
        case SNNE::Mode::RateCode:
            // TODO: Optimize using dynamic allocation of memory
            this->neurons[neuron_position] = Rate((this->neuron_trace[neuron_position]), (this->neuron_output[neuron_position]));
            break;
        case SNNE::Mode::PhaseCode:
            // TODO: Optimize using dynamic allocation of memory
            this->neurons[neuron_position] = Phase((this->neuron_trace[neuron_position]), (this->neuron_output[neuron_position]));
            break;
        case SNNE::Mode::PopulationCode:
            // TODO: Optimize using dynamic allocation of memory
            this->neurons[neuron_position] = Population((this->neuron_trace[neuron_position]), (this->neuron_output[neuron_position]));
            break;

        default:
            std::cout << "Wrong neuron mode!" << std::endl;
            break;
        }
    }
}

void SNNE::SetMode(std::vector<int> neuron_position, SNNE::Mode mode)
{
    for (std::vector<int>::size_type i = 0; i < neuron_position.size(); i++)
    {
        // Use loop to set all neuron mode trough this->setMode(int, SNNE::Mode)
        this->SetMode(neuron_position[i], mode);
    }
}