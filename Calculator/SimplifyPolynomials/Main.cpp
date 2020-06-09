/*******************************************
 * Program simplifies polynomials with leading 
 * coefficiants of 1
 * 
 * Author: Jered Stevens
 * Date: 3/7/2020
 * ****************************************/
#include <iostream>

using namespace std;

/*****************************************
 * struct: factors
 * params: int a, int b
 * holds two nums to be multiplied
 * ***************************************/
struct factors{
    int a , b = 0;
    factors();
    factors(int x, int y){
        a = x;
        b = y;
    }
};

bool modIsZero(int a, int b, int x){
    bool isTrue = false;
    
    if(((a * b) % x) == 0){
        isTrue = true;
    }
};

int main(){
    int x = 8;
    int tempup = 1;
    int tempdown = x;
    factors factorArr[10];
    int count = 0;

    //while(tempup <= tempdown){
        
        if (modIsZero(tempup, tempdown, x)){
            factorArr[count].a = tempup;
            factorArr[count].b = tempdown;
        }
   // }
cout << factorArr[0].a << endl;
cout << factorArr[0].b;
    return 0;
}