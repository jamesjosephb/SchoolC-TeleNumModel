//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          BillingTN.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include "BillingTN.hpp"

BillingTN::BillingTN(const int & inNumWorkingTNs, const string & inCustomerName, const string & inNXX, const string & inNPA, const string & inLine): WorkingTN(inCustomerName, inNXX , inNPA, inLine)
{
    NumWorkingTNs = inNumWorkingTNs;
}

BillingTN::BillingTN(const string & inCustomerName, const string & inNXX, const string & inNPA, const string & inLine): WorkingTN(inCustomerName, inNXX , inNPA, inLine)
{
    int newNumWorkingTNs;
    BillingTN::setNumWorkingTNs(newNumWorkingTNs);
}


BillingTN::~BillingTN()
{
    cout << "In Billing Telephone Number Destructor" << endl;
}

void BillingTN::setNumWorkingTNs(const int & newNumWorkingTNs)
{
    NumWorkingTNs = newNumWorkingTNs;
}

int BillingTN::getNumWorkingTNs()
{
    return NumWorkingTNs;
}

void BillingTN::PrintToStream(ostream & Out)
{
    //TelephoneNumber::PrintToStream(Out);
    WorkingTN::PrintToStream(Out);
    cout<< endl;
    cout << "Number of Working Lines: " << BillingTN::NumWorkingTNs;

}



