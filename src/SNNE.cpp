#include "SNNE.h"

SNNE::SNNE(int number_of_neurons)
{
    // Resize vectors to match sizes
    this->neuron_output.resize(number_of_neurons);
    this->neuron_trace.resize(number_of_neurons);
    this->neurons.resize(number_of_neurons);
    // Begin outputs with zero
    std::fill(this->neuron_output.begin(), this->neuron_output.end(), 0);

    std::cout << timer.ElapsedTime() - timer.start << std::endl;
    std::cout << timer.start << std::endl;
    std::cout << timer.ElapsedTime() - timer.start << std::endl;
    std::cout << timer.start << std::endl;
    std::cout << timer.ElapsedTime() - timer.start << std::endl;
    std::cout << timer.start << std::endl;
    std::cout << timer.ElapsedTime() - timer.start << std::endl;
    std::cout << timer.start << std::endl;
    std::cout << timer.ElapsedTime() - timer.start << std::endl;
    std::cout << timer.start << std::endl;
}

SNNE::~SNNE()
{
    for (std::vector<int>::size_type i = 0; i < neurons.size(); i++)
    {
        delete neurons[i];
    }
}

void SNNE::Start()
{
    for (size_t c = 0; c < 3; c++)
    {
        for (std::vector<int>::size_type i = 0; i < neurons.size(); i++)
        {
            neurons[i]->Start();
            std::cout << (int)neuron_output[i];
        }
        std::cout << std::endl;
    }
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
        std::cout << "Setting neuron number " << neuron_position;
        switch (mode)
        {
        case SNNE::Mode::RateCode:
            std::cout << " to rate code mode" << std::endl;
            this->neurons[neuron_position] = new Rate(&(this->neuron_trace[neuron_position]), &(this->neuron_output[neuron_position]));
            break;
        case SNNE::Mode::PhaseCode:
            // TODO: Optimize using dynamic allocation of memory
            this->neurons[neuron_position] = new Phase((this->neuron_trace[neuron_position]), (this->neuron_output[neuron_position]));
            break;
        case SNNE::Mode::PopulationCode:
            // TODO: Optimize using dynamic allocation of memory
            this->neurons[neuron_position] = new Population((this->neuron_trace[neuron_position]), (this->neuron_output[neuron_position]));
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