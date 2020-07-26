//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          WorkingTN.hpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#ifndef WorkingTN_hpp
#define WorkingTN_hpp

#include <stdio.h>
#include "TelephoneNumber.hpp"


class WorkingTN: public TelephoneNumber
{
    
public:
    WorkingTN(string inCustomerName, string inNPA,string inNXX,string inLine);
    void setCustomerName(const string & newCustomerName);
    string getCustomerName() const;
    ~WorkingTN();
    virtual void PrintToStream(ostream & Out);
    
protected:
    string CustomerName;
};


#endif /* WorkingTN_hpp */
