#include <iostream>

using namespace std;

int main()
{
    //E3-1
    int n,k;
    cout << "Enter a positive integer n: " ;
    while(cin >> n)
    {
        if(n>=3)
        {
            if (n%2==1)//odd
            {
                k = (n+1)/2;
                for(int i=1; i<=k; i++)
                {
                    for(int j=1; j<=k-i; j++)
                        cout << " ";
                    for(int j=1; j<=2*i-1; j++)
                        cout << "*";
                    cout << endl;
                }
                for(int i=1; i<=k-1; i++)
                {
                    for(int j=1; j<=i; j++)
                        cout << " ";
                    for(int j=1; j<=n-(2*i); j++ )
                        cout << "*";
                    cout << endl;
                }
            }
            else if(n%2==0)//even
            {
                for(int i=1; i<=n; i++)
                {
                    for(int j=1; j<=n; j++)
                    {
                        if(i==1||i==n)//first and last line
                            cout << "*";
                        else if(j==1||j==n)
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
            }
            cout << "Enter a positive integer n: " ;
        }
        else if (n==-1)
            break;
        else
        {
            cout << "Please enter again!" << endl;
            cout << "Enter a positive integer n: " ;
        }

    }

    return 0;
}
