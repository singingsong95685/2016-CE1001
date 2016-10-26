/*****************************************
* Exercise 2
* Name: TA
* Student Number: 10058XXXX
* Course: 2016-CE1001-A or B
******************************************/
#include <iostream>
using namespace std;
int main(){
    int chineseScores = 0;
    int mathScores = 0;
    int englishScores = 0;
    int scienceScores = 0;
    int historyScores = 0;
    float average = 0;
    float sum=0;
    
    cout<<"Chinese score: ";
    cin>>chineseScores;
    
    cout<<"Math score: ";
    cin>>mathScores;
    
    cout<<"English score: ";
    cin>>englishScores;
    
    cout<<"Science score: ";
    cin>>scienceScores;
    
    cout<<"History score: ";
    cin>>historyScores;
    
    //summing the scores.
    sum = chineseScores+mathScores+englishScores+scienceScores+historyScores;
    
    //sum / numbers of subject = average.
    average = sum/5;
    
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average;
}
