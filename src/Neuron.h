#ifndef _NEURON_H
#define _NEURON_H

#include <iostream>

// Time defined in milliseconds
#define SPIKE_DURATION 100

class Neuron
{
private:
    //
    int neuron_trace;
    //
    char neuron_output;
public:
    Neuron(int *neuron_trace, char *neuron_output);
    Neuron();
    ~Neuron();
    virtual void Start();
};

#endif 
