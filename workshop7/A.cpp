//
//  A.cpp
//  workshop7
//
//  Created by Max Wilkinson on 07/11/2023.
//

#include "A.h"
#include <iostream>

//scope resolution operator (::), shows what class the
//  constructor and methods belong to

A::A(const string& newName) : rawInput(newName)//constructor which takes in string parameter
{
    cout << "class initialised, A object, parameter (" << &rawInput << ") ..." << endl;
};
void A::setName(string newName)//method which sets name of given variable to parameter
{
    rawInput = newName;//raw value is set to the new value
}

void A::printName()//displays the value of the given variable
{
    cout << "Name: " << rawInput << endl;//simple output statement formatted with variable name
}

A::~A()//deconstructor which deletes object when finished being used, deconstructors cant have parameters
{
    cout << "class instance destroyed, A object, parameter (" << rawInput << ") ..." << endl;
};
