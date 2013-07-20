//Tyler Morgan
//cpp uw online cert course quarter 3
//point.cpp

#include "point.h"


Point::Point(int x, int y)
  :my_x(x),
   my_y(y)
{}

Point::~Point(){};

int Point::get_x() const
{
  return my_x;
}

int Point::get_y() const
{
  return my_y;
}

bool Point::operator==(const Point& p) const 
{
  if(p.get_x() == my_x && p.get_y() == my_y)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Point::operator!=(const Point& p) const
{
  if(p.get_x() != my_x && p.get_y() != my_y)
  {
    return true;
  }
  else
  {
    return false;
  }
}
