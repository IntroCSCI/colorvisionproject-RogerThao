Color Vision Project

## Description

My program asks the user to enter three numbers then enter the file to diplay the colors back.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


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
select three colors. 
red blue green
Open the file marked colors.css 
colors.css
red blue green
```

## C++ Guide

### Variables and Data Types

I used "string choice;" for a do while loop at the end of the program, I also used "string colors, text;" for my file and I used "fstream reader;" so that I can type into my file and read it out.

### Console Input and Output

My console input simply asks for the user to enter three colors and then the file name.

cout << "select three colors. \n";
getline( cin, colors);

ofstream MyFile ("colors.css");
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

### Iteration

I used a "do, while" loop and asked the user at the end of the program if they want to select another three colors or not.

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

### File Input and Output

I asked the user for the colors and saved it into the file then asked them to enter the file name so that the colors they typed in can be displayed back.

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

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
