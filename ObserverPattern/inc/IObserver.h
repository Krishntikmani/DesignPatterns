#ifndef IOBSERVER_H
#define IOBSERVER_H   

#include<iostream>

class Observer{
    public:
        Observer(){};
        ~Observer(){};
        virtual void update(float temp, float pressure, float humidity) = 0;
};

#endif