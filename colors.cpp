#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "colors.h"
using std::cout;
using std::string;
using std::vector;
using std::cin;
using std::endl;

string colors::Colors(string& list){
 vector <string> chosenColors;
  string colors;

  cout << "select three colors together or individually to see the hex value. \n";
  getline(cin, colors);
  if(colors == "red")
  {
    cout << "red hex value = #FF0000" << endl;
  }
  else if(colors == "green")
  {
    cout << "green hex value = #00FF00" << endl;
  }
  else if(colors == "blue")
  {
    cout << "blue hex value = #0000FF" << endl;
  }
  else if(colors == "brown")
  {
    cout << "brown hex value = #A52A2A" << endl;
  }
  else if(colors == "yellow")
  {
    cout << "yellow hex value = #FFFF00" << endl;
  }
  else if(colors == "pink")
  {
    cout << "pink hex value = #FFC0CB" << endl;
  }
  else if(colors == "orange")
  {
    cout << "orange hex value = #FFA500" << endl;
  }
  else if(colors == "purple")
  {
    cout << "purple hex value = #800080" << endl;
  }
  else if(colors == "white")
  {
    cout << "white hex value = #FFFFFF" << endl;
  }
  else if(colors == "black")
  {
    cout << "black hex value = #000000" << endl;
  }
  else{
  std::fstream MyFile ("colors.css");
  MyFile << colors;
  chosenColors.push_back(colors);
  MyFile.close();
  } 

  for(int i = 0; i < chosenColors.size(); i++)
  {
    cout << "The chosen colors are: " << colors << endl;
  }
  return list;
}

void colors::chosenColors(string color){
  string colors, text;
  std::fstream reader;

  cout << "Open the file marked colors.css \n";
  getline (cin,text);
  reader.open(text,std::ios::in);
  if(reader.is_open() )
  {
    while (!reader.eof())
    {
      getline(reader, text);
      cout << text << endl;
      reader.close();
    }
  }else
  {
    cout << "cannot open file. \n";
  }
}