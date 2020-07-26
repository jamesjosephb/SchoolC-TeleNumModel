//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          BillingTN.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#ifndef BillingTN_hpp
#define BillingTN_hpp

#include <stdio.h>
#include "WorkingTN.hpp"

class BillingTN: public WorkingTN
{
public:
    BillingTN(const int & inNumWorkingTNs, const string & inCustomerName, const string & inNXX, const string & inNPA, const string & inLine);
    BillingTN(const string & inCustomerName, const string & inNXX, const string & inNPA, const string & inLine);
    ~BillingTN();
    void setNumWorkingTNs(const int & newNumWorkingTNs);
    int getNumWorkingTNs();
    virtual void PrintToStream(ostream & Out);
    
protected:
    int NumWorkingTNs;
};

#endif /* BillingTN_hpp */
