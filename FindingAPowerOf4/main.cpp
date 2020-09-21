//Finds if a number entered is a power of 4
//Written by Jered Stevens
//06/23/2020

#include "time.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    time_t start , end;
    long long int val = 823372036854775807;
    long long int key = 1;
    int counter = 0;

    time(&start);
    for(key; key<val; key*=4){
        counter++;
    }
    time(&end);
    
    double timeTaken = double(end - start);
    cout << "Search time was " << fixed << timeTaken << " seconds" << endl << endl;

    cout<< "key: " << key << " value:" << val << endl;
    if(key == val){
        cout << "4 to the power of " << counter << " is " << val << endl;
    }else{
        cout << val << " is not a power of 4";
    };



}