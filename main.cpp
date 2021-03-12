//Author: Roger Thao
#include <iostream>
#include <fstream>
using namespace std;

int main(){
string choice;
string colors, text;
fstream reader;

do{
cout << "select three colors. \n";
getline( cin, colors);

ofstream MyFile ("colors.css");
MyFile << colors;
MyFile.close();

cout << "Open the file marked colors.css \n";
getline (cin, text);  
reader.open(text,ios::in );
  if (reader.is_open() ){
    while (!reader.eof() ){
      getline( reader, text);
      cout << colors << endl;
      reader.close();
    }
  }else {
    cout << "cannot open file. \n";
  }

cout << "select more colors (yes/no)? \n";
cin >> choice;
cin.ignore();
}while ("choice != no");
  
  return 0;
}
