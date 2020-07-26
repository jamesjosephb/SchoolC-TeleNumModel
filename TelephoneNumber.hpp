//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          TelephoneNumber.hpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#ifndef TelephoneNumber_hpp
#define TelephoneNumber_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;


class TelephoneNumber
{
public:
    TelephoneNumber();
    TelephoneNumber(string NPA, string NXX, string Line);
    void setNPA(const string & inNPA);
    void setNXX(const string & NXX);
    void setLine(const string & inLine);
    string getNPA() const;
    string getNXX() const;
    string getLine() const;
    ~TelephoneNumber();
    virtual void PrintToStream(ostream & Out);
    
    
private:
    string NPA,
           NXX,
           Line;
};


#endif /* TelephoneNumber_hpp */
