//Tyler Morgan
//UW c++ qtr 3
//xml_vg_parser.h

#include "vector_graphic.h"
#include <sstream>

class VectorGraphicPersistence
{
public:
  VectorGraphicPersistence();
  ~VectorGraphicPersistence();
  void from_xml(std::stringstream& ss);
  std::stringstream o_xml(VectorGraphic& vg);
};
