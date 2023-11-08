//
//  A.cpp
//  workshop7
//
//  Created by Max Wilkinson on 07/11/2023.
//

#include "A.h"//libary for cout+cin etc
#include <iostream>//libary for basic input output

//scope resolution operator (::), shows what class the
//  constructor and methods belong to

void A::setName(string newName)//method which sets name of given variable to parameter
{
    rawInput = newName;//raw value is set to the new value
}

void A::printName()//displays the value of the given variable
{
    cout << "Name: " << rawInput << endl;//simple output statement formatted with variable name
}
