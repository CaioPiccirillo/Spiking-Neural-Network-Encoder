#ifndef _SNNENCODER_H
#define _SNNENCODER_H
#include <iostream>
#include <vector>

// Time defined in milliseconds
#define SPIKE_DURATION 100 
class SNNE
{
private:
    // 
    std::vector<int> neuron_trace;
    //
    std::vector<int> neuron_output; 
    //
    std::vector<int> neuron_mode; 

public:
    enum Mode
    {
        Rate,
        Phase,
        Population
    };
    struct Output
    {
        //
        std::vector<int> neuron_trace;
        //
        std::vector<int> neuron_output; 
    };

    void Start();
    void Stop();
    // Function used to set mode of operation
    void SetMode(int neuron_position, SNNE::Mode neuron_mode);
    // Function used to set multiple neurons to same mode of operation
    void SetMode(std::vector<int> neuron_position, SNNE::Mode neuron_mode);

    SNNE(int number_of_neurons);
    ~SNNE();
};

#endif