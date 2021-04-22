//Author: Roger Thao
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

string Colors(string&);

int main(){
vector <string> chosenColors;
string choice = "";
string colors, text;
string list;
fstream reader;

do
{
cout << "select three colors except black. \n";
getline( cin, colors);
fstream MyFile ("colors.css");
MyFile << colors;
chosenColors.push_back(colors);
MyFile.close();


for(int i=0; i < chosenColors.size(); i++)
{
  cout << "The chosen colors are: " << colors << endl;
}

Colors(list);

cout << "Open the file marked colors.css \n";
getline (cin, text);  
reader.open(text,ios::in );
  if(reader.is_open() )
    {
    while(!reader.eof() )
      {
      getline( reader, text);
      cout << colors << endl;
      reader.close();
    }
  }else 
    {
    cout << "cannot open file. \n";
  }


cout << "select more colors (yes/no)? \n";
cin >> choice;
cin.ignore();
}while(choice != "no");
  
  return 0;
}

string Colors(string& list)
{
  string colors = "";
  if(colors != "black")
  {
    for(int i = 0; i < 0; i++){
      cout << list << endl;
    }
  }else
  {
    cout << "try again" << endl;
  }
  return list;
}