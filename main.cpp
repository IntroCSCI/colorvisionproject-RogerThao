//Author: Roger Thao
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

string Colors(string&);
string chosenColors(string);

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

}while(choice != "no");
  
  return 0;
}

string Colors(string& list)
{
  vector <string> chosenColors;
  string colors;

  cout << "select three colors. \n";
  getline( cin, colors);
  if(colors == "red")
  {
    cout << "red hex value = #ff0000" << endl;
  }
  else if(colors == "green")
  {
    cout << "green hex value = #00ff00" << endl;
  }
  else if(colors == "blue")
  {
    cout << "blue hex value = #0000ff" << endl;
  }
  fstream MyFile ("colors.css");
  MyFile << colors;
  chosenColors.push_back(colors);
  MyFile.close();

  for(int i = 0; i < chosenColors.size(); i++)
  {
    cout << "The chosen colors are: " << colors << endl;
  }
  return list;
}

string chosenColors(string color)
{
  string colors, text;
  fstream reader;

  cout << "Open the file marked colors.css \n";
  getline (cin,text);
  reader.open(text,ios::in);
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
  return color;
}
