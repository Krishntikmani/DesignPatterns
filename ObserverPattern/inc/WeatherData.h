#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H
#include "ISubject.h"

class WeatherData: public Subject{
    public:
        WeatherData();
        ~WeatherData();
        void setTemp(const float &temp);
        void setPressure(const float &pressure);
        void registerObserver(Observer *Obs);
        void unregisterObserver(Observer *Obs);
        void notifyObservers();
        void setHumidity(const float &humidity);
        void getData(float temp, float pressure, float humidity);

    private:
        float temp = 0.0f;
        float pressure = 0.0f;
        float humidity = 0.0f;
        std::vector<Observer*> obsList;
};

# endif