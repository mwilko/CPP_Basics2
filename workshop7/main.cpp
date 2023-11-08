//
//  main.cpp
//  workshop7
//
//  Created by Max Wilkinson on 07/11/2023.
//
#include <stdio.h>//libary for standard input/output
#include <iostream>//libary for cout+cin etc
#include "A.h"//includes header file for 'A'


int main() //main function, entry of c++ programs
{
    A* a1 = new A("a");//pointer object made, parameter 'a'
    
    //class member access operator (->), used to access public members of the 'A' class
    a1->setName("IamA");//set name of a1 to 'IAmA' (CMAO used with pointers)
    A a2 = *a1;// A object 'a2' is set to the value of pointer object 'a1'
    delete a1;//calls deconstructor and deletes object 'a1'
    a2.printName();//calls method
    return 0;//returns '0' to show propram has been executed properly
}
