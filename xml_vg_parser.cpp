//Tyler Morgan
//UW c++ qtr3
//xml_vg_parser.cpp

#include <iostream>
#include "xml_vg_parser.h"

VectorGraphicPersistence::VectorGraphicPersistence(){};
VectorGraphicPersistence::~VectorGraphicPersistence(){};

VectorGraphic VectorGraphicPersistence::from_xml(std::stringstream& ss)
{
  std::stringstream buffer;
  std::vector<std::string> arguments;
  char c;
  while(ss.get(c))
  {
    std::cout << ".";
    if(c == '<')
    {
      while(c != '>' && c != '\n')
      {
        ss.get(c);
        if(c != ' ' ||c != '\n' || c!= '\t' || c != '>' )
        {
          buffer << c;
        }
        if(c == ' ')
        {
          arguments.push_back(buffer.str());
          buffer.str("");
          ss.get(c);
          while(c != '>')
          {
            if(c != '=' && c != '"')
            {
              buffer << c;
            }
            if(c == '=' || c == ' ')
            {
              arguments.push_back(buffer.str());
              buffer.str("");
            }
            ss.get(c);
          }
          arguments.push_back(buffer.str());
          buffer.str("");
        }
      }
      arguments.push_back(buffer.str());
      buffer.str("");
    }
  }
  
  int point_x;
  int point_y;
  /* if(arguments[0] == "VectorGraphic") */
  /* { */
  /*   std::cout << "dubugging"; */
  /*   VectorGraphic vg1; */
    for(int x=0; x<arguments.size(); x++)
    {
      std::cout << arguments[x];
    }
    /* std::cout << vg1.point_count() << std::cout; */
    /* return vg1; */
  /* } */
}

int VectorGraphicPersistence::to_i(std::string s)
{
  std::stringstream ss;
  int x;
  ss << s;
  ss >> x;
  return x;
}

