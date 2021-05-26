#ifndef PORT_H_
#define PORT_H_

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <memory>


class Port
{
  private:
  std::string name;
  std::vector<std::shared_ptr<Port>>outbound;
  std::string arrival_time;
  std::string departure_time;

  public:
  Port();
  Port(std::string name,std::string arrival_time,std::string departure_time);
  Port(const Port& source); 
  Port(Port&& source);

  std::string get_arrival_time(){return this->arrival_time;}
  std::string get_departure_time(){return this->departure_time;}

  Port& operator=(const Port& source); 
  Port& operator=(const Port&& source); 

   bool operator==(const Port& source); 
   bool operator!=(const Port& source); 




  ~Port();


};
#endif
