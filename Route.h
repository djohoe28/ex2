#include "Port.h"

class Route {
private:
    Port src; // Source Port
    Port des; // Destination Port
    int weight; //Route Weight

public:
    Route(const Port &src, const Port &des, int weight); // Value Constructor

    int getWeight() { return this->weight; } // {weight} getter.

    int setWeight(int newWeight); // {weight} setter.

    void printRoute(); // Prints function.

};