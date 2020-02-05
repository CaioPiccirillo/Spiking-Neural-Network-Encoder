#include <QCoreApplication>
#include <iostream>
#include "SNNE.h"

int main(int argc, char *argv[])
{
    SNNE *encoder = new SNNE(256,SNNE::Mode::Rate);
    std::cout << "Deu certo!";
}
