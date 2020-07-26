//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          TelephoneNumber.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include "TelephoneNumber.hpp"


TelephoneNumber::TelephoneNumber(): TelephoneNumber("_","_","_"){}
TelephoneNumber::TelephoneNumber(string inNPA, string inNXX, string inLine)
{
    TelephoneNumber::setNPA(inNPA);
    TelephoneNumber::setNXX(inNXX);
    TelephoneNumber::setLine(inLine);
    cout << "In Telephone Number Default Constructor" << endl;
}
void TelephoneNumber::setNPA(const string & inNPA)
{
    if(inNPA.size() != 3)
       {
           string newNPA;
           while(newNPA.size() != 3)
           {
                cout << "Enter NPA Code. (Must be 3 characters) \nEneter:";
                cin >> newNPA;
               NPA = newNPA;
           }
       }
    else NPA = inNPA;
}


void TelephoneNumber::setNXX(const string & inNXX)
{
    if(inNXX.size() != 3)
    {
        string newNXX;
        while(newNXX.size() != 3)
        {
            cout << "Enter NXX Code. (Must be 3 characters) \nEneter:";
            cin >> newNXX;
            NXX = newNXX;
        }
    }
    else NXX = inNXX;
}


void TelephoneNumber::setLine(const string & inLine)
{
    if(inLine.size() != 4)
    {
        string newLine;
        while(newLine.size() != 4)
        {
            cout << "Enter the last 4 in phone number. (Must be 4 characters) \nEneter:";
            cin >> newLine;
            Line = newLine;
        }
    }
    else Line = inLine;
}




string TelephoneNumber::getNPA() const {return NPA;}
string TelephoneNumber::getNXX() const {return NXX;}
string TelephoneNumber::getLine() const {return Line;}

TelephoneNumber::~TelephoneNumber()
{
    cout << "In Telephone Number  Destructor" << endl;
}


void TelephoneNumber::PrintToStream(ostream & Out)
{
    cout << "Telephone Number: " << getNPA() << "-" << getNXX() << "-" << getLine() << endl;
}





















