/*****************************************
* Exercise 5
* Name: ‘hàvãd
* Student Number: 105522093
* Course: 2016-CE1001 A or B
******************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double input=0;
    char oper=0;
    double temp=0;
    double sum=0;
    cin>>temp;
    while(1)
    {
        cin>>oper;
        if(oper=='+')
        {
            sum+=temp;
            cin>>input;
            temp=input;
        }
        else if(oper=='-')
        {
            sum+=temp;
            cin>>input;
            temp=input*-1;
        }
        else if(oper=='*')
        {
            cin>>input;
            temp*=input;
        }
        else if(oper=='/')
        {
            cin>>input;
            temp/=input;
        }
        else if(oper=='^')
        {
            int app=input;
            cin>>input;
            for(int i=1;i<input;i++)
                temp*=app;
        }
        else if(oper=='$')//Invase
        {
            sum+=temp;
            int re=sum;
            for(sum=0;re>0;re/=10)
            {
                sum=sum*10;
                sum+=re%10;
            }
            cin>>input;
            temp=input;
        }
        else if(oper=='=')
        {
            sum+=temp;
            cout<<"Sum= "<<sum<<endl<<endl;
            cin>>temp;
            sum=0;
            input=0;
        }
        else
        {
            cout<<"Invaild Input"<<endl;
            break;
        }
    }
}
