#include "CurrentScreen.h"

CurrentScreen::CurrentScreen(){
    std::cout<<"Object of Current Screen is Created"<<std::endl;
}

CurrentScreen::~CurrentScreen(){
    std::cout<<"Object of Current Screen is Destructed"<<std::endl;
}

void CurrentScreen::update(float temp, float pressure, float humidity){
    this->temp=temp;
    this->pressure=pressure;
    this->humidity=humidity;
    this->displayCurrentScreen();
}

void CurrentScreen::displayCurrentScreen(){
    std::cout<<"----------- Current Display Notification -------------"<<std::endl;
    std::cout<<"Current Temperature: "<<this->temp<<std::endl;
    std::cout<<"Current Pressure: "<<this->pressure<<std::endl;
    std::cout<<"Current Humidity: "<<this->humidity<<std::endl;
}

