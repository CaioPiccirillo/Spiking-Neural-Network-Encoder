#ifndef _SNNENCODER_H
#define _SNNENCODER_H

class SNNE
{
private:
    
public:
    enum Mode
    {
        Rate,
        Phase,
        Population
    };

    SNNE(int number_of_neurons, SNNE::Mode mode);
    ~SNNE();
};

#endif