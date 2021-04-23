//Author: Roger Thao
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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

string Colors(string& list)
{
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
  fstream MyFile ("colors.css");
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



void chosenColors(string color)
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
  
}
