#include "Port.h"

class Route
{
  private:
  Port src; //source port
  Port des; //destination port
  int weight;

  public:
  Route(const Port& src,const Port& des,int weight);

  int get_weihgt(){return this->weight;}

  int updateWeight(int newWeight); 
  void printRoute();

};