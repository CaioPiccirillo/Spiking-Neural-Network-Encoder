#ifndef _SNNENCODER_H
#define _SNNENCODER_H
#include <iostream>
#include <vector>
#include "Rate.h"

class SNNE
{
private:
    //
    std::vector<int> neuron_trace;
    //
    std::vector<bool> neuron_output;
    //
    std::vector<int> neuron_mode;

public:
    enum Mode
    {
        RateCode,
        PhaseCode,
        PopulationCode
    };
    struct Output
    {
        //
        std::vector<int> neuron_trace;
        //
        std::vector<bool> neuron_output;
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