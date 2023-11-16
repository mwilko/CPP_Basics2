//
//  A.hpp
//  workshop7
//
//  Created by Max Wilkinson on 07/11/2023.
//

#ifndef A_h
#define A_h

#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

class A//class which holds corresponding class declarations
{
private://only accessable by this 'A' class
    string rawInput;//variable to save given name to object

public://accessable outside of the class
    A(const char name);
    A(const string& rawInput);//copy constructor which takes in string parameter


    void setName(string newInput);//changes name of a variable

    void printName();//displays name of a variable
    
    
    ~A();//deconstructor which deletes object when finished being used, deconstructors cant have parameters
};

#endif /* A_h*/ //end of code block
