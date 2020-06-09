/**********************************************************
 * Author:      Jered Stevens
 * Date:        05/05/2020
 * WhatItDo:    Calculates bonuses based on hours worked
 * 
 *              Flat rate bonus will be added in later Version.
 */

#include <iostream>

using namespace std;

struct disability{
    bool disabled;
    string description;
    disability(){
        disabled = NULL;
        description = NULL;
    }
    disability(bool isDisabled, string descrip){
        if (isDisabled == true){
            disabled = true;
            description = descrip;
        } 
    }
};

struct i9{
    bool onFile;
    string expires;
    i9(){
        onFile = NULL;
        expires = NULL;
    }
    i9(bool isOnFile, string exp){
        if(isOnFile == true){
            onFile == true;
            expires = exp;
        }
    }
}

struct military{
    bool vet;
    int status;
    military(){
        vet = NULL;
        status = NULL;
    }
    military(bool isVet, int stat){
        if(isVet == true){
            vet = true;
            status = stat;
        }
    }
}

struct empPersonalInfo{
    string legalName;
    string first_Name;
    string middle_Initial;
    string last_Name;
    string print_As;
    string social;
    bool gender;
    string DOB;
    int marital_Stat;
    bool citizen;
    int ethnicity;
    disability disabled();
    i9 i_9();
    military vet();

    empPersonalInfo(){
        legalName = "John Doe Smith";
        first_Name = "John";
        middle_Initial = "D";
        last_Name = "Smith";
        print_As = "John D. Smith";
        social = "123-45-6789";
        gender = true;
        DOB = "01-01-1900";
        marital_Stat = 0;
        citizen = true;
        ethnicity = 0;
        disabled();
        i_9();
        vet();
    }
    empPersonalInfo(string legal, string name, string middle, string last, string printAs, string soc, bool gen,
                    string date, int marit, bool cit, int eth, bool isDis, bool isI9, bool isVet){
                        legalName = legal;
                        first_Name = name;
                        middle_Initial = middle;
                        last_Name = last;
                        print_As = printAs;
                        social = soc;
                        gender = gen;
                        DOB = date;
                        marital_Stat = marit;
                        citizen = cit;
                        ethnicity = eth;
                        
                    }




class Employee{
    empPersonalInfo();

}

struct Node(){
    Node* Next;
    Node* Prev;

    Node(){
        Next = NULL;
        Prev = NULL;
    };
}


float getTL(){
    float m=0;
    
    cout << "Enter total amount to be paid out.\n";
    cin >> m;

    return m;
}

float getTH(){
    float n=0;

    cout << "Enter total hours worked by all employees.\n";
    cin >> n;

    return n;
}

float getHourly(float m, float n){
    // Hourly pay is m(money) / n(hours)

    float x = m/n;

    return x;
}

float getHourlyPay(){
    float m = 0;        //Variable for total money to be paid out
    float n = 0;        //Variable for total hours worked by all employees
    
    float x = 0;      //Variable for hourly pay
    m = getTL();
    n = getTH();
    x = getHourly(m,n);

    return x;
}

int main(){
    cout << getHourlyPay();
}