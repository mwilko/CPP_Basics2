//
//  A.hpp
//  workshop7
//
//  Created by Max Wilkinson on 07/11/2023.
//

#ifndef A_h//if not defined, header class
#define A_h//define header class

#include <string>//libary for string handling
#include <stdio.h>//libary for standard input/output
#include <iostream>//libary for cout+cin etc
using namespace std;//namespace for string, cout, cin without refering to it with the scope resolution operator

class A//class which holds corresponding class declarations
{
private://only accessable by this 'A' class
    string rawInput;//variable to save given name to object

public://accessable outside of the class
    A(string rawInput)//constructor which takes in string parameter
    {
        //cout << "'A' constructor has been initialised..." << endl;//message to show constructor has been initialised
    };
    ~A()//deconstructor which deletes object when finished being used, deconstructors cant have parameters
    {
        //cout << "'A' deconstructor has been initialised..." << endl;//message to show deconstructor has been initialised
    };

    void setName(string newInput);//changes name of a variable

    void printName();//displays name of a variable
};

#endif /* A_h*/ //end of code block
