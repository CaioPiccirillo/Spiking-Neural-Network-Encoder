#ifndef _RATE_H
#define _RATE_H

#include <vector>
#include <chrono>
#include <iostream>
#include "Neuron.h"

class Rate : public Neuron
{
private:
    //
    int neuron_trace;
    //
    bool neuron_output;

public:
    Rate(int neuron_trace, bool neuron_output);
    ~Rate();
    void Start();
};

#endif 