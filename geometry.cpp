#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class rectangle{
    public: 
        void makeSides(double x, double y){
            sideA = x;
            sideB = y;
        }

        void getSides(){
            cout << "side A: " << sideA << endl;
            cout << "side B: "<< sideB << endl;
        }

        void makeArea(){
            area = sideA*sideB;
        }

        void getArea(){
            cout << "The area of the rectangle is: " << area << endl;
        }

        void squareCheck(){
            if(sideA == sideB){
                cout << "This is a square!" << endl;
            }
            else{
                cout << "not a square" << endl;
            }
        }
        void getDiagonal(){
            double diagonal = sqrt(pow(sideA,2) + pow(sideB,2));
            printf("The length of the diagonal is %f", diagonal);

        }


    private:
        double sideA;
        double sideB;
        double area;

};

int main(){
    rectangle Joe;
    Joe.makeSides(6.7,76);
    Joe.getSides();
    Joe.makeArea();
    Joe.getArea();
    Joe.squareCheck();
    Joe.getDiagonal();
    return 0;
}