#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double windchill(double speed, double temp);

int main() {

  double wind;
  double temperature;

    cout << "Enter current windspeed in miles per hour: ";
    cin >> wind;
    cout << "Enter current temperature in fahrenheit: ";
    cin >> temperature;
    cout << "Current Temperature: " << temperature << "°F\n" << "Current Windchill: " << setprecision(4) << windchill(wind, temperature) << endl;    

    return 0;
}

double windchill(double speed, double temp){
  double windspeed;
  windspeed = 35.74 + (0.615 * temp) - (35.75*pow(speed, 0.16)) + (0.4275 * temp * pow(speed, 0.16));
  return windspeed; 
}
