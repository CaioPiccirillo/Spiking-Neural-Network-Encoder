#ifndef _NEURON_H
#define _NEURON_H

#include <iostream>

// Time defined in milliseconds
#define SPIKE_DURATION 100

class Neuron
{
private:
    /* data */
public:
    Neuron(int *neuron_trace, bool *neuron_output);
    Neuron();
    ~Neuron();
};

#endif 
