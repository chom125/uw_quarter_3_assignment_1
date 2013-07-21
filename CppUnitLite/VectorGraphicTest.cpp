#include "TestHarness.h"
#include "../xml_vg_parser.h"


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
  vg1.close_shape();
  CHECK_EQUAL(vg1.is_closed(), true);
}

TEST(VectorAddingPoints, VectorGraphic)
{
  VectorGraphic vg2;
  vg2.add_point(Point(0,1));
  vg2.add_point(Point(3,4));
  CHECK_EQUAL(2, vg2.point_count());
  vg2.add_point(Point(5,6));
  vg2.add_point(Point(7,8));
  vg2.erase_point(3);
  CHECK_EQUAL(3, vg2.point_count());
}

#define STR(a) #a
const std::string VectorGraphicXML = STR(
                                    <VectorGraphic>
                                      <Point x="0" y="5"/>
                                      <Point x="2" y="3"/>
                                    </VectorGraphic>);

TEST(XML_Reader, VectorGraphicPersistence)
{
  std::stringstream ss;
  ss << VectorGraphicXML;
  ss << std::ios::eofbit;
  VectorGraphicPersistence persist;
  persist.from_xml(ss);
}

