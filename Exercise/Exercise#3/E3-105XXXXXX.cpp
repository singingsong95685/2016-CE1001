#include <iostream>            //  ch2 p9 p10


using namespace std;          //ch2 p65 p68   "//"  <-comment ch2 p7

int main()   //ch2 p13 { <-left brace } <- right brace
{
            int x, y;  //two number to find gcd lcm    //ch2 p28 p29
            int r;
            int m, n;  // x=m y=n
            int lcm;
            int a;  //number for  triangle height


        cout << "Enter two number to find gcd and lcm : ";
        cin >> x >> y;                                         //ch2 p39
        cout <<"Enter a number to print a isosceles triangle : ";
        cin >> a;

        m = x;
        n = y;

        while (n != 0)// not equal      // ch3 p16  //ch3 p51 p52 p53 p54 p94
        {
            r = m % n;  // modulus operator     //ch2 p50 p51 p52
            m = n;      // assignment           //ch2 p63
            n = r;
        } // end while loop   m  is return
          // exit gcd with value m
        lcm = x*y / m;                         //ch2 p553

        cout << "GCD(" << x << " , " << y << ") = " << m << endl;
        cout << "LCM(" << x << " , " << y << ") = " << lcm << endl;

        for (int i = 1; i <= a; i++)        //ch3 p16
        {
            for (int j = 1; j <= a - i; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "$";
            }
            cout << endl;     //endl ch2 p44
        }



        eturn 0;

}
