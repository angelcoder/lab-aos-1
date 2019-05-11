//
//  main.cpp
//  Lab1 AOS
//
//  Created by Anhelina Lohvina on 16.09.2018.
//  Copyright © 2018 Anhelina Lohvina. All rights reserved.
//

#include <iostream>

#include "time.h"
#include "Header.hpp"
#include <string>
#include <iomanip>
#include <limits>
 
using namespace std;

void Info(){
    cout << "Write the type of the variable you want to check, you can also check all types" << endl;
    cout <<"--------------------" << endl;
    cout << "\"i\" stands for int" << endl;
    cout << "\"d\" stands for double" << endl;
    cout << "\"f\" stands for float" << endl;
    cout << "\"l\" stands for long" << endl;
    cout << "\"c\" stands for char" << endl;
    cout << "\"a\" stands for all" << endl;
    cout <<"--------------------" << endl;
    cout << "Press 1 to exit" << endl;
}

int main() {
    IntType Int; DoubleType Double; LongType Long; FloatType Float; CharType Char;
    cout << setiosflags(ios::left);
    char dataType = 'c';
    Info();
    do{
        cin >> dataType;
        switch(dataType){
            case 'i': Int.print(); break;
            case 'd': Double.print(); break;
            case 'f': Float.print(); break;
            case 'l': Long.print(); break;
            case 'c': Char.print(); break;
            case 'a':  Int.print(); cout << endl;
                Double.print(); cout << endl;
                Float.print(); cout << endl;
                Long.print(); cout << endl;
                Char.print(); cout << endl; break;
            case '1': break;
            default: cout << "WRONG INPUT! TRY IT AGAIN" << endl;
        }
        cin.ignore(std::numeric_limits<int>::max(),'\n');
    } while(dataType != '1');
    cout << "Caclulations are complete" << endl;
    system("pause");
    return(0);
}
