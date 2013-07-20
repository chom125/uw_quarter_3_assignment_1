//Tyler Morgan
//cpp uw online cert course quarter 3
//vector_graphic.cpp

#include "vector_graphic.h"

VectorGraphic::VectorGraphic()
  :closed(false)
{}
VectorGraphic::~VectorGraphic(){};

void VectorGraphic::add_point(const Point &p)
{
  my_points.push_back(p);
}

void VectorGraphic::remove_point(const Point& p) 
{
  for(int x =0; x < my_points.size(); x++)
  {
    if(p == my_points.at(x))
    {
      my_points.erase(my_points.begin() + x);
    }
  }
}

void VectorGraphic::erase_point(int index)
{
  my_points.erase(my_points.begin() + index);
}

void VectorGraphic::open_shape()
{
  closed = false;
}

void VectorGraphic::close_shape()
{
  closed = true;
}

bool VectorGraphic::is_closed()
{
  return closed;
}

bool VectorGraphic::is_open()
{
  return !closed;
}

int VectorGraphic::get_width()
{
  return my_width;
}

int VectorGraphic::get_height()
{
  return my_height;
}

Point VectorGraphic::get_point(int index) const
{
  return my_points[index];
}
