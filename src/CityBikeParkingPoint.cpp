#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

class CityBikeParkingPoint{

    private:
        int id, total_space;
        vector<bool> blocks;
        double longitude, latitude;

    public:

        /**
         * Constructor of CityBikeParkingPoint, buy default all the spaces are free
         * @param id id of the CityBikeParkingPoint
         * @param total_space total of spaces
         * @param longitude 
         * @para, latitude
         */
        CityBikeParkingPoint(int id, int total_space, double longitude, double latitude){
            this->id = id;
            this->total_space = total_space;
            this->longitude=longitude;
            this->latitude = latitude;
            blocks = vector<bool>(total_space, true);
        }

        /**
         *  Method that returns the total number of spaces form the CityBikeParkingPoint
         * @return int value
         */
        int getNumberSpace(){
            return total_space;
        }

        /**
         *  Method that returns the number of occupied spaces form the CityBikeParkingPoint
         * @return int value
         */
        int getNumberOccupiedSpace(){
            return count_if(blocks.begin(), blocks.end(), [](bool n){return (!n);} );
        }

         /**
         *  Method that returns the longitude from the CityBikeParkingPoint
         * @return double value
         */
        double getLongitude(){
            return longitude;
        }

         /**
         *  Method that returns the latitude the CityBikeParkingPoint
         * @return double value
         */
        double getLatitude(){
            return latitude;
        }

        /**
         *  Method that returns the id from the CityBikeParkingPoint
         * @return int value
         */
        int getID(){
            return id;
        }

        /**
         * Method that return the status from the space
         * @param block id of the space
         * @return true if the space is free or false if the space is occupied
         */
        bool getStatus(int block){
            return blocks.at(block);
        }

        /**
         * Method that change the status of the space to free as consecuence of renting a bike
         * @param block id of the space
         */
        void rentBike(int block){
            assert(block<blocks.size() && blocks[block]!=true);
            blocks[block]=true;
        }

        /**
         * Method that change the status of the space to occupied as consecuence of returning a bike
         * @param block id of the space
         */
        void returnBike(int block){
            assert(block<blocks.size() && blocks[block]!=false);
            blocks[block]=false;
        }
        //Not implemented
        double getDistance(double longitude, double latitude){
            return 0;
        }
        //Not implemented
        double getDistance(CityBikeParkingPoint point){
            return 0;
        }

        bool operator ==(CityBikeParkingPoint other){
            if( longitude == other.getLongitude() && latitude == other.getLatitude()){
                return true;
            }
            return false;
        }
};
