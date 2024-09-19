#ifndef ISUBJECT_H
#define ISUBJECT_H 

#include "IObserver.h"
#include<vector>

class Subject{
    public:
        Subject(){};
        ~Subject(){};
        virtual void registerObserver(Observer* Obs) =0;
        virtual void unregisterObserver(Observer* Obs) =0;
        virtual void notifyObservers() =0;

};

# endif