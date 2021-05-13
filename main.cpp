//Author: Roger Thao
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "colors.h"

using namespace std;

string Colors(string&);
void chosenColors(string);

int main(){
string choice = "";
string colors, text;
string list;
string color;
fstream reader;

do
{
  Colors(list);

  chosenColors(color);

  cout << "Select more colors (yes/no)? \n";
  cin >> choice;
  cin.ignore();

}while(choice == "yes");
  
  return 0;
}

