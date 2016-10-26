/*****************************************
* Assignment2
* Name: TA
* Student Number: 10058XXXX
* Course: 2016-CE1001
******************************************/

#include <iostream>
using namespace std;

int main(){
    float h,w;
    cout<<"Enter your height (cm) and weight (kg): ";
    cin>>h>>w;
    float BMI = w/((h/100)*(h/100));
    cout<<"BMI: "<<BMI;
}
