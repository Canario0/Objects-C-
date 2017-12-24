#include <iostream>
#include <vector>
#include <algorithm>
#include "./CityBikeParkingPoint.h"
using namespace std;

int main(){
    CityBikeParkingPoint my_object(1,10,0., 0.);

    cout<< "Number of space "<< my_object.getNumberSpace()<<endl;

    my_object.returnBike(3);
    cout<< "Number of occupied space "<< my_object.getNumberOccupiedSpace()<<endl;
    // this thows and error:
    //my_object.rentBike(10);
    double x=my_object.getLongitude();
    double y= my_object.getLatitude();
    printf("Longitude: %f Latitude %f \n", x, y);
}