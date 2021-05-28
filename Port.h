#ifndef PORT_H_
#define PORT_H_

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <memory>

using namespace std;

class Port {
private:
    string name;                        // Name of Port
    vector<shared_ptr<Port>> outbound;  // Vector of Outbound connections to Port
    string arrival_time;                // Arrival time at Port ("DD/MM hh:mm" format)
    string departure_time;              // Departure time at Port ("DD/MM hh:mm" format)

public:
    Port();                                                                             //Default Constructor

    Port(const string &name, const string &arrival_time, const string &departure_time); // Value Constructor

    Port(const Port &source);                                                           // Copy Constructor

    Port(const Port &&source);                                                          // Move Constructor

    string getName() { return this->name; }                                             // {name} getter

    string getArrivalTime() { return this->arrival_time; }                              // {arrival_time} getter

    string getDepartureTime() { return this->departure_time; }                          // {departure_time} getter

    Port &operator=(const Port &source);                                                // Assignment Operator

    Port &operator=(const Port &&source);                                               // Move Operator

    bool operator==(const Port &source);                                                // Equals Operator

    bool operator!=(const Port &source);                                                // Unequals Operator


    ~Port();                                                                            // Destructor


};

#endif
