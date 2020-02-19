#include <QCoreApplication>
#include <iostream>
#include "SNNE.h"

int main(int argc, char *argv[])
{
    SNNE *encoder = new SNNE(256);
    encoder->Start();
    std::cout << "Deu certo!";
}
