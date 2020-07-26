//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          WorkingTN.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include "WorkingTN.hpp"

WorkingTN::WorkingTN(string inCustomerName, string inNPA,string inNXX,string inLine):TelephoneNumber(inNPA, inNXX,inLine)
{
    WorkingTN::setCustomerName(inCustomerName);
    //:TelephoneNumber(const string & inNPA, const string & inNXX,const string & inLine);
    //WorkingTN::setNPA(inNPA);
    //WorkingTN::setNXX(inNXX);
    //WorkingTN::setLine(inLine);
    cout << "In Working Telephone Number Default Constructor" << endl;
}

void WorkingTN::setCustomerName(const string & newCustomerName)
{
    //CustomerName = newCustomerName;
    if(newCustomerName.size() < 1)
    {
        string editCustomerName;
        while(editCustomerName.size() < 1)
        {
            cout << "Enter Customer's Name. (Cannot be empty) \nEneter:";
            cin >> editCustomerName;
            CustomerName = editCustomerName;
        }
    }
    else CustomerName = newCustomerName;

}
string WorkingTN::getCustomerName() const
{
    return CustomerName;
}

WorkingTN::~WorkingTN()
{
    cout << "In Working Telephone Number Destructor" << endl;
}


void WorkingTN::PrintToStream(ostream & Out)
{
    TelephoneNumber::PrintToStream(Out);
    cout << "Customer: " << WorkingTN::CustomerName;
}

