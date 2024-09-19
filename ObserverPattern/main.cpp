#include "WeatherData.h"
#include "CurrentScreen.h"
#include <unistd.h>

int main(){
    WeatherData* weatherStation = new WeatherData();
    CurrentScreen* currentScreen1 = new CurrentScreen();
    CurrentScreen* currentScreen2 = new CurrentScreen();

    weatherStation->registerObserver(currentScreen1);
    weatherStation->registerObserver(currentScreen2);
    weatherStation->getData(20.0,1.5,30.2);
    sleep(2);
    weatherStation->getData(30.0,2.5,20.2);

    weatherStation->unregisterObserver(currentScreen1);
    sleep(5);
    weatherStation->getData(20.0,2.5,20.2);

    delete weatherStation;
    delete currentScreen1;
    delete currentScreen2;
}