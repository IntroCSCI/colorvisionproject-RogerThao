#ifndef colors_H
#define colors_H

#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::string;
using std::vector;

class colors{
  private:
    string choice = "";
    string colors, text;
    string list;
    string color;

  public:
    string Colors(string&);
    void chosenColors(string);
}


#endif