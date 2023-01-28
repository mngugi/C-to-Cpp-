//
//  lesson2.cpp
//  C++Teaser
//
//  Created by peter  ngugi on 29/05/14.
//  Copyright (c) 2014 no. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
 int age;
 cout << "Please Enter your age:";
 cin >> age;
 
    cin.ignore();
    if (age < 100) {
        cout <<" You are pretty young!\n";
        
    } else if(age == 100) {
        cout << "You are old\n";
    
    }

    else {
         cout << "You are really old";
    
    }


    cin.get();

}