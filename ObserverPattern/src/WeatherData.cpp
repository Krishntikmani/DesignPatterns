#include "WeatherData.h"
#include <algorithm>

WeatherData::WeatherData(){
    std::cout<<"Object of Weather Data is Created"<<std::endl;
}

WeatherData::~WeatherData(){
    std::cout<<"Object of Weather Data is Destructed"<<std::endl;
}

void WeatherData::setHumidity(const float &humidity){
    this->humidity = humidity;
}

void WeatherData::getData(float temp, float pressure, float humidity)
{
    this->setTemp(temp);
    this->setPressure(pressure);
    this->setHumidity(humidity);
    this->notifyObservers();
}

void WeatherData::setTemp(const float &temp){
    this->temp = temp;
}

void WeatherData::setPressure(const float &pressure){
    this->pressure = pressure;
}

void WeatherData::registerObserver(Observer* Obs){
    this->obsList.push_back(Obs);
    std::cout<<"Welcome Observer to the community"<<std::endl;
}

void WeatherData::unregisterObserver(Observer* Obs){
    obsList.erase(std::remove(obsList.begin(), obsList.end(), Obs), obsList.end());
    std::cout<<"Fuck off observer you are removed"<<std::endl;
}

void WeatherData::notifyObservers(){
    for(auto obs : obsList){
        obs->update(this->temp,this->pressure,this->humidity);
    }
}
