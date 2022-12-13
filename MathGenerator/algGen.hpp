#include "algGen.h"
#include <cmath>
#include <random>
#include <time.h>
#include <iomanip>

int pickCase(){
    //Variable to pick format
    int j;

    //Keep it between 0 and 3
    j = rand() % 4;
    
    return j;
}


/****************************************
 * Sets variable referenced to random
 * num between 0 and 9
 ****************************************/
void setV(int &v){
    
    v = rand() % 10;

    // if(v == 0){
    //     std::cout << "V is 0\n";
    // }


// if the variable is 0, change it half of the time
    if(v==0 && flipCoin() == true){
        v = rand() % 10;
       // std::cout << "Now V is " << v << "\n\n";
    }

    return;
}

/*********************************************
 * Sets all 3 variables
 *********************************************/
void setAll(int& m,int& x,int& b){
    setV(m);
    setV(x);
    setV(b);

    correctZeros(m, x, b);

    return;
};

void correctZeros(int& m,int& x,int& b){
    if(m == 0){
        //std::cout<< "m was 0 \n";
        m = rand() % 10;
            if(m == 0){
                m += 1;
            }
    }

    if(x == 0){
        //std::cout<< "x was 0 \n"; 
        x = rand()%10;
    }
    if(b == 0){
        //std::cout<< "b was 0 \n";
        b = rand()%10;
    }
    
    return;
}

/********************************************
 * Uses mx+b to find y
 ********************************************/
void findY(int& y,int& m,int& x,int& b){

    y = m * x + b;

    return;
};

/************************************************
 * returns random true or false
 ************************************************/
bool flipCoin(){
    
    int x = rand() % 2;

    //std::cout << "coin is "  << x << std::endl;

    if(x == 1)
        return true;
    else
        return false;

}


/**************************************************
 * Gets number of problems wanted by user
 **************************************************/
void setLoops(int &x){
    
    std::cout << "Please enter number of problems wanted\n";
    std::cin >> x;
    std::cout << std::endl;

    return;
};

void printYMXB(int& y,int& m,int& b){
    if(m > 1)
        std::cout << std::left << std::setw(1) << y << " = " << m << "x" << " + " << b << std::endl;
    else
        std::cout << std::left << std::setw(1) << y << " = " << "x" << " + " << b << std::endl;
    
    return;
};

void printYBMX(int& y,int& m,int& b){
    if(m > 1)
        std::cout << std::left << std::setw(1) << y << " = " << b << " + " << m << "x " << std::endl;
    else
        std::cout << std::left << std::setw(1) << y << " = " << b << " + " << "x" << std::endl;
    
    return;
};

void printMXBY(int& y,int& m,int& b){
    if(m > 1)
        std::cout << std::left << std::setw(1) << m << "x"  << " + " << b << " = " << y << std::endl;
    else
        std::cout << std::left << std::setw(1) << "x" << " + " << b << " = " << y <<  std::endl;
    
    return;
};

void printBMXY(int& y,int& m,int& b){
    if(m > 1)
        std::cout << std::left << std::setw(1) << b << " + " << m << "x" << " = " << y << std::endl;
    else
        std::cout << std::left << std::setw(1) << y << " = " << b << " + " << "x" << std::endl;
    
    return;
};

void printProbNum(int i){
    if(i < 10){
        std::cout << i << std::setw(3) << std::left << ") ";
    }else{
        std::cout <<std::setw(2) << std::left << i  << std::setw(1) << ") ";
    }

    return;
}

void printProblem(int& y,int& m,int& b){
    switch (pickCase())
        {
        case 0:
            printYMXB(y, m, b);
            break;
        
        case 1:
            printYBMX(y, m, b);
            break;
        
        case 2:
            printMXBY(y, m, b);
            break;

        case 3:
            printBMXY(y, m, b);
            break;

        default:
            break;
        }
};


void printError(){

    std::cout << "An error has occured.\nPlease restart the program.\n";

    return;
}