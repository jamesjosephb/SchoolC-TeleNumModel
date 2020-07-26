//     TITLE:             Lab 4 - Using Classes + Inheritance
//     FILENAME:          main.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Nov 30, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include <iostream>
#include "BillingTN.hpp"

ostream & operator << (ostream &Out, TelephoneNumber &TN )
{
    TN.PrintToStream(Out);
    return Out;
}

int main(int argc, const char * argv[]) {

    TelephoneNumber  YourNumber;
    TelephoneNumber  Paul("719", "590", "6768");
    TelephoneNumber Bob("719", "590", "6729");
    WorkingTN CSStaff1("Book Store", "719", "590", "6732");
    WorkingTN CSStaff2("Borland C++ Guru", "212", "371", "6940");
    WorkingTN CSStaff3 ("Visual C++ Expert", "405", "612", "3433");
    BillingTN   CSDept("Dean of CS", "719", "590", "6850");
    BillingTN   Library("Librarian", "719", "598", "6708");
    BillingTN   Reception(35, "Receptionist" ,"719", "598", "0200");
    cout << "Testing the overloaded << operator with the virtual "
    <<  "PrintToStream()\n\n";
    cout << "The Telephone numbers are: \n";
    cout <<  YourNumber  << endl;
    cout <<  Paul  << endl;
    cout << Bob << endl;
    cout << "The Working Telephone numbers are: \n";
    cout << CSStaff1  << endl;
    cout << CSStaff2  << endl;
    cout << CSStaff3 << endl;
    cout << "The Billing Telephone numbers are: \n";
    cout << CSDept << endl;
    cout << Library << endl;
    cout << Reception << endl;
    
    cout << "End Tests of Telephone hierarchy!" << endl;

    return 0;
}

//Enter NPA Code. (Must be 3 characters)
//Eneter:719
//Enter NXX Code. (Must be 3 characters)
//Eneter:243
//Enter the last 4 in phone number. (Must be 4 characters)
//Eneter:5975
//In Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Working Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Working Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Working Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Working Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Working Telephone Number Default Constructor
//In Telephone Number Default Constructor
//In Working Telephone Number Default Constructor
//Testing the overloaded << operator with the virtual PrintToStream()
//
//The Telephone numbers are:
//Telephone Number: 719-243-5975
//
//Telephone Number: 719-590-6768
//
//Telephone Number: 719-590-6729
//
//The Working Telephone numbers are:
//Telephone Number: 719-590-6732
//Customer: Book Store
//Telephone Number: 212-371-6940
//Customer: Borland C++ Guru
//Telephone Number: 405-612-3433
//Customer: Visual C++ Expert
//The Billing Telephone numbers are:
//Telephone Number: 719-590-6850
//Customer: Dean of CS
//Number of Working Lines: 0
//Telephone Number: 719-598-6708
//Customer: Librarian
//Number of Working Lines: 0
//Telephone Number: 719-598-0200
//Customer: Receptionist
//Number of Working Lines: 35
//End Tests of Telephone hierarchy!
//In Billing Telephone Number Destructor
//In Working Telephone Number Destructor
//In Telephone Number  Destructor
//In Billing Telephone Number Destructor
//In Working Telephone Number Destructor
//In Telephone Number  Destructor
//In Billing Telephone Number Destructor
//In Working Telephone Number Destructor
//In Telephone Number  Destructor
//In Working Telephone Number Destructor
//In Telephone Number  Destructor
//In Working Telephone Number Destructor
//In Telephone Number  Destructor
//In Working Telephone Number Destructor
//In Telephone Number  Destructor
//In Telephone Number  Destructor
//In Telephone Number  Destructor
//In Telephone Number  Destructor
//Program ended with exit code: 0

