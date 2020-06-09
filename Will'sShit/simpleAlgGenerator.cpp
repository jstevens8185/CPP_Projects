/********************************************************
 * Author:      Jered Stevens
 * Date:        05/11/2020
 * WhatItDo:    Generates random simple algebra problems
 * ******************************************************/

#include <iostream>

#include "algGen.h"
#include "algGen.hpp"





int main(){

    srand(time(NULL));

    int y, m, x, b;
    int loops;
    int chanceOfZeros;

    setLoops(loops);
    //setChanceOfZeros(chanceOfZeros);

    for (int i = 1; i <= loops; i++){
        setAll(m, x, b);
        findY(y,m,x,b);
        printProbNum(i);
        printProblem(y,m,b);
    }

    system("pause");
    
    // std::cout << i << ") " << y << " = " << m << "(" << x << ")" << " + " << b << std::endl; 
    // std::cout << "Y = " << y << std::endl;
    // std::cout << "M = " << m << std::endl;
    // std::cout << "X = " << x << std::endl;
    // std::cout << "B = " << b << std::endl;
}






