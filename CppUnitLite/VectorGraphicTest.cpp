#include "TestHarness.h"
#include "../vector_graphic.h"


// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
//
TEST(PointInitTest, Point)
{
  Point p1(1,2);

  CHECK_EQUAL(1,p1.get_x());
  CHECK_EQUAL(2,p1.get_y());
}
TEST(VectorInitGraphicTest, VectorGraphic)
{
  VectorGraphic vg1;
  CHECK_EQUAL(vg1.is_closed(), false);
}


