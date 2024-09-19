#ifndef CURRENT_SCREEN_H
#define CURRENT_SCREEN_H

#include "IObserver.h"


class CurrentScreen: public Observer{
    public:
        CurrentScreen();
        ~CurrentScreen();
        void displayCurrentScreen();
    private:
        float temp = 0.0f;
        float pressure = 0.0f;
        float humidity = 0.0f;
        void update(float temp, float pressure, float humidity);
};
# endif