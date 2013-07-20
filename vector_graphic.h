//Tyler Morgan
//cpp uw online cert course quarter 3
//vector_graphic.h
//
#include <vector>
#include "point.h"

class VectorGraphic
{
public:
  VectorGraphic();
  ~VectorGraphic();

  void add_point(const Point& p);
  void remove_point(const Point& p);
  void erase_point(int index);

  void open_shape();
  void close_shape();
  bool is_closed();
  bool is_open();

  int get_width();
  int get_height();

  int point_count();
  Point get_point(int index) const;

private:
  int my_height;
  int my_width;
  bool closed;
  std::vector<Point> my_points;
};

