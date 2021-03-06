Color Vision Project

## Description

My program asks the user to enter three colors then enter the file to diplay the colors back.

### v0.2 Updates

The user can now choose to enter three colors or select an individual color to see their hex value.

### v1.0 Updates

The user can enter three colors or select an individual color to see its hex value now sees which hex value and the program will display the combinationthat is least likely to cause problems.


Roger Thao

Roger Thao

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
select three colors together or individually to see the hex value. 
red blue green
The chosen colors are: red blue green
Open the file marked colors.css 
colors.css
red blue green
Select more colors (yes/no)?
no
For people with protanopia, deuteranopia, and tritanopia the colored hex values of #DE1961,#0088FF, and #FFBF00 are the least likely to cause issues.

or

select three colors together or individually to see the hex value.
red
red hex value = #FF0000
Select more colors (yes/no)?
no
For people with protanopia, deuteranopia, and tritanopia the colored hex values of #DE1961,#0088FF, and #FFBF00 are the least likely to cause issues.

```

## C++ Guide

### Variables and Data Types

I used "string choice;" for a do while loop at the end of the program, I also used "string colors, text;" for my file and I used "fstream reader;" so that I can type into my file and read it out.
I added "string list;" and "string color" to help with my functions.

### Console Input and Output

My console input asks the user to input three colors together or separately if they want ot see the hex value.

cout << "select three colors together or individually to see the hex value. \n";
getline(cin, colors);

fstream MyFile ("colors.css");
MyFile << colors;
MyFile.close();

cout << "Open the file marked colors.css \n";
getline (cin, text);

### Decisions

I used if and else for opening my file and when it is unable to open. 

if (reader.is_open() ){
    while (!reader.eof() ){
      getline( reader, text);
      cout << colors << endl;
      reader.close();
    }
  }else {
    cout << "cannot open file. \n";
  }

I used another if/else to present the hex values of various colors.

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

I added the final if/else to show the compadible hex colors if the user says "no" to end the program.

if(choice != "yes")
  {
    cout << "For people with protanopia, deuteranopia, and tritanopia the colored hex values of #DE1961, #0088FF, and #FFBF00 are the least likely to cause issues.";
  }else
  {
    
  }

### Iteration

I used a "do, while" loop to asked the user if they want to select another three colors or not and if they enter yes then the loop restarts, but if they enter anything else then the program ends.

I added some class codes to the do while loop and a final cout statement within an if/else loop.

do
{
  colorized colors1;
  colors1.Colors(list);
  colors1.chosenColors(color);

  cout << "Select more colors (yes/no)? \n";
  cin >> choice;
  cin.ignore();

  if(choice != "yes")
  {
    cout << "For people with protanopia, deuteranopia, and tritanopia the colored hex values of #DE1961, #0088FF, and #FFBF00 are the least likely to cause issues.";
  }else
  {

  }
}while(choice == "yes");
  
  return 0;
}


### File Input and Output

I asked the user for the colors and saved it into the file then asked them to enter the file name so that the colors they typed in can be displayed back.

string colors;

  cout << "select three colors together or individually to see the hex value. \n";
  getline(cin, colors);
  fstream MyFile ("colors.css");
  MyFile << colors;
  chosenColors.push_back(colors);
  MyFile.close();

### Arrays/Vectors

I used a vector to store the chosen colors as strings and also display them inside a function.

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

### Functions

I used two functions, the first one contains strings and uses pass by reference to change and store the colors entered by the user, then displays them out to the user.

string Colors(string&);

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

The second function contains a void because it is not returning anything and uses pass by value to store but not change the value in the function. The function stores the file input and displays them out to the user.

void chosenColors(string);

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
  return color;
}

### Classes

class colorized{
  private:
    string choice = "";
    string colors, text;
    string list;
    string color;

  public:
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

void chosenColors(string color)
{
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
};

  colorized colors1;
  colors1.Colors(list);
  colors1.chosenColors(color);

