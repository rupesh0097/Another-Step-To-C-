#include <iostream>
#include <string>
using namespace std;

int main() {
    //Comparison Operators
    //comparison operators are used to compare two values. The return value of comparison operator is either true (1) or false(0).
    int a = 12, b = 14;
    cout << (a == b);
    cout << (a != b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << ( a >=b) << endl; 
    
    
    //Logical Operators
    //Logical operators are used in descision making.
    cout << "This is an example of logical operator which logically determine if a, i.e 12, is greater than 5 and  less than 15 or not." << endl;    
    cout << (a>5 && a<15) << endl;
    cout << "This is an example of logical OR operator that will giv e true value if either of the condition is true."<< endl;
    cout << (a > 5 || a<10)<< endl;
    cout << "This is an example of logical NOT operator which reverse the result. if the result if true it will give output as false" << endl;
    cout << !(a>5 && a<15)<< endl;
    
    //Strings in C++
    string greeting = "Good Morining";
    cout << greeting << endl;
    
    /*Concatination in C++
    string fname = "Rupesh";
    string lname = "Yadav";
    string fullname = fname + " " + lname;
    cout << fullname << endl; */
    
    //Append in C++
    string fname = "Rupesh ";
    string lname = "Yadav";
    string fullname = fname.append(lname);
    cout << fullname << endl;
    
    //String Length
    string txt = "abcdefghijklmnopqrstuvwzyx";
    cout << "The length of the string is " << txt.length();
    
    
    return 0;
    
}