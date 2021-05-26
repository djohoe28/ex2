#include "Route.h"

Route::Route(const Port& src,const Port& des,int weight)
{
  this->src=src;
  this->des=des;
  this->weight=weight;
}

void Route::printRoute()
{
    std::cout<<this->src.get_name()<<"------->"<<this->des.get_name()<<" "<<this->get_weihgt()<<std::endl;
}