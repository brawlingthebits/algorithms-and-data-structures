#include <iostream>
using namespace std;

int main() {

    long long roadLength, stop, pricePerKilometer, stopPrice, stopsPerRoad, totalOilPrice, totalStopsPrice, roadTripPrice;
    cin >> roadLength >> stop >> pricePerKilometer >> stopPrice;
    totalOilPrice = pricePerKilometer * roadLength;
    stopsPerRoad = roadLength / stop;
    totalStopsPrice = stopsPerRoad * stopPrice;
    roadTripPrice =  totalOilPrice + totalStopsPrice;
    cout << roadTripPrice << endl;

    return 0;
}