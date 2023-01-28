//
//  lesson1b.cpp
//  C++Teaser
//
//  Created by peter  ngugi on 29/05/14.
//  Copyright (c) 2014 no. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int thisIsAnumber;
    std::cout << "Please Enter the a number:";
    cin>> thisIsAnumber;
    cin.ignore();
    
    cout<<"You entered: " << thisIsAnumber <<"\n";
    cin.get();

    return 0;

}