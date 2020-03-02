#ifndef _SNNENCODER_H
#define _SNNENCODER_H

#include <iostream>
#include <vector>
#include <chrono>
#include "Phase.h"
#include "Population.h"
#include "Rate.h"
#include "Neuron.h"

class SNNE
{
private:
    //
    std::vector<int> neuron_trace;
    //
    std::vector<char> neuron_output;
    //
    std::vector<Neuron *> neurons;
    // Used to check running state
    bool running;
    class Timer
    {
    private:
        /* data */
    public:
        Timer(/* args */){

        };
        ~Timer(){

        };
        int64_t start = ElapsedTime();
        // Return elasped time in microseconds
        int64_t ElapsedTime()
        {
            auto now = std::chrono::steady_clock::now();
            auto duration = now.time_since_epoch();
            auto micros = std::chrono::duration_cast<std::chrono::microseconds>(duration).count();
            return micros;
        }
    };

    // Timer used to track neurons
    SNNE::Timer timer;

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
        std::vector<char> neuron_output;
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