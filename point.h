//Tyler Morgan
//cpp uw online cert course quarter 3
//point.h

class Point
{
public:
  Point(int x,int y);
  ~Point();
  int get_x() const;
  int get_y() const;

  bool operator==(const Point& p) const;
  bool operator!=(const Point& p) const;
 
private:
  int my_x;
  int my_y;
};


