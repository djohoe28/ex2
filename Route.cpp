#include "Route.h"

using namespace std;

Route::Route(const Port &src, const Port &des, int weight) {
    // Value Constructor
    // Input -
    //          const Port &src = Reference of source Port to set.
    //          const Port &des = Reference of destination Port to set.
    //          int weight = Weight of route (avg. # of minutes to cross)
    // Print - N/A
    // Output - Constructed Route
    this->src = src;
    this->des = des;
    this->weight = weight;
}

void Route::printRoute() {
    // Print function
    // Input - N/A
    // Print - Route data ("{src.name} ----> {des.name} {weight}" format.)
    std::cout << this->src.get_name() << "------->" << this->des.get_name() << " " << this->get_weight() << endl;
}