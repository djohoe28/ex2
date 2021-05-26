#include "Port.h"

Port::Port()
{
  this->name=" ";
  this->departure_time="00/00/00";
  this->arrival_time="00/00/00";
}

Port::Port(std::string name,std::string arrival_time,std::string departure_time)
{
  this->name=name;
  this->arrival_time=arrival_time;
  this->departure_time=departure_time;
}

Port::Port(const Port& source)
{
  this->name=source.name;
  this->arrival_time=source.arrival_time;
  this->departure_time=source.departure_time;
  this->outbound=source.outbound;

}

Port& Port::operator=(const Port& source)
{
  if(this!=&source)
  {
    this->name=source.name;
    this->arrival_time=source.arrival_time;
    this->departure_time=source.departure_time;
    this->outbound=source.outbound;
  }
  return *this;
}

bool Port:: operator==(const Port& source){return (this->name==source.name);}
bool Port::operator!=(const Port& source){return!(this->name==source.name);}

  








Port::~Port()
{

}