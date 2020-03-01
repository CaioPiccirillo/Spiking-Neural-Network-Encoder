#include <QCoreApplication>
#include <iostream>
#include "SNNE.h"

int main(int argc, char *argv[])
{
    int number_of_neurons = 6;
    SNNE *encoder = new SNNE(number_of_neurons);
    // Creating vector of indexes to set mode once
    std::vector<int> vector_of_index(number_of_neurons);
    // Function used to fill vector with ascending number starting from 0
    std::iota(std::begin(vector_of_index), std::end(vector_of_index), 0);
    // Setting mode
    encoder->SetMode(vector_of_index, SNNE::Mode::RateCode);
    // Starting encoder
    encoder->Start();
    std::cout << "It works!" << std::endl;
}
