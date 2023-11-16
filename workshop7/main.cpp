//
//  main.cpp
//  workshop7
//
//  Created by Max Wilkinson on 07/11/2023.
//
#include <iostream>
#include "A.h"


int main() //main function, entry of c++ programs
{
    A *a1 = new A("a");//pointer object made, parameter 'a'
    
    //class member access operator (->), used to access public members of the 'A' class
    
    //member access, -> is for a pointer
    a1->setName("IamA");//set name of a1 to 'IAmA'
    A a2 = *a1;// A object 'a2' is set to the value of pointer object 'a1'
    a2 = *a1;
    delete a1;//calls deconstructor and deletes object 'a1'
    
    //member access with '.' used with objects
    a2.printName();//displays name of 'a2' field
    return 0;
}
