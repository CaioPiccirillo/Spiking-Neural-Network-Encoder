#include <QCoreApplication>
#include <iostream>
#include "SNNE.h"

int main(int argc, char *argv[])
{
    SNNE *encoder = new SNNE(256);
    encoder->SetMode(0,SNNE::Mode::RateCode);
    encoder->Start();
    std::cout << "Deu certo!" << std::endl;
}
