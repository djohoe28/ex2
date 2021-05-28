#include "Port.h"

using namespace std;

Port::Port() {
    // Default Constructor
    // Input - N/A
    // Print - N/A
    // Output - Constructed Port {this}
    this->name = " ";
    this->departure_time = "00/00/00";
    this->arrival_time = "00/00/00";
}

Port::Port(const string &name, const string &arrival_time, const string &departure_time) {
    // Value Constructor
    // Input -
    //         string &name = The name of the Port
    //         string &arrival_time = Arrival time at Port, in "DD/MM hh:mm" format.
    //         string &departure_time = Departure time from Port, in "DD/MM hh:mm" format.
    // Print - N/A
    // Output - Constructed Port {this}
    this->name = name;
    this->arrival_time = arrival_time;
    this->departure_time = departure_time;
}

Port::Port(const Port &source) {
    // Copy Constructor
    // Input - const Port &source = Reference of Port to copy.
    // Print - N/A
    // Output - Constructed Port {this}
    this->name = source.name;
    this->arrival_time = source.arrival_time;
    this->departure_time = source.departure_time;
    this->outbound = source.outbound;
    operator=(source);
}

Port &Port::operator=(const Port &source) {
    // Assignment Operator
    // Input - const Port &source = Reference of Port to copy.
    // Print - N/A
    // Output - Newly copied Port& {this}
    // TODO: Same function as Copy Constructor. Could it be used instead?
    if (this != &source) {
        this->name = source.name;
        this->arrival_time = source.arrival_time;
        this->departure_time = source.departure_time;
        this->outbound = source.outbound;
    }
    return *this;
}

Port &Port::operator=(const Port &&source) {
    // Move Constructor
    // Input - const Port &&source = Reference of Port to move.
    // Print - N/A
    // Output - Newly moved Port& {this}
    // TODO: Apply move semantics.
}

bool Port::operator==(const Port &source) {
    // Equals Operator
    // Input - const Port &source = Port to compare this to.
    // Print - bool = Are they equal? (Do they have the same name?)
    // Output - N/A
    return (this->name == source.name);
}

bool Port::operator!=(const Port &source) {
    // Unequals Operator
    // Input - const Port &source = Port to compare this to.
    // Print - bool = Are they unequal? (Do they have different names?)
    // Output - N/A
    return !(this->name == source.name);
}


Port::~Port() {
    // Destructor
    // Input - N/A
    // Print - N/A
    // Output - N/A
    // TODO: Is vector correctly removed from memory using smart pointers?
}