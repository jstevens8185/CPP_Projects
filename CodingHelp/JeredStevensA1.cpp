#include <iostream>
#include <cmath>

using namespace std;

struct discHolder{
    float disc1;
    float disc2;
    float disc3;

    //Default constructor
    discHolder(){
        disc1 = 0;
        disc2 = 0;
        disc3 = 0;
    }

        discHolder(float a, float b, float c){
        disc1 = a;
        disc2 = b;
        disc3 = c;
    }
};


class Matrix{
    private:
        int array[3][3];
        int a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3;
        float numerator1, numerator2, numerator3;

    public:
        void myMatrix(){

            for (int r = 0; r < 3; r++){
                for (int c = 0; c < 3; c++){
                    cout << "enter a number\n";
                    cin >> array[r][c];
                }
            }

                        

            a1 = array[0][0];
            a2 = array[1][0];
            a3 = array[2][0];
            b1 = array[0][1];
            b2 = array[1][1];
            b3 = array[2][1];
            c1 = array[0][2];
            c2 = array[1][2];
            c3 = array[2][2];
        };

        discHolder valueOfDiscriminate(){

            float disc1, disc2, disc3;

            disc1 = ((b1^2) - 4 * a1 * c1);
            disc2 = ((b2^2) - 4 * a2 * c2);
            disc3 = ((b3^2) - 4 * a3 * c3);

            return discHolder(disc1, disc2, disc3);
        };

        void valueOfNumerator(){
            
        }

        void print(discHolder discs){

            //PRINT MATRIX
            // for (int c = 0; c < 3; c++){
            //     for (int r = 0; r < 3; r++){
            //         cout << array[c][r];
            //     }
            // }

            cout << discs.disc1 << endl;
            cout << discs.disc2 << endl;
            cout << discs.disc3 << endl;


        };

};



int main(){
    
    Matrix matrix;
    discHolder disc;

    matrix.myMatrix();
    disc = matrix.valueOfDiscriminate();
    matrix.print(disc);
  

}
