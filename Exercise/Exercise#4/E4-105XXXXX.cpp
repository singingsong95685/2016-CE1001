#include <iostream>

using namespace std;

int main()
{
    //E4-1
    int bit=1;
    int decimal=0;
    int binary=0;

    cout << "Convert binary to decimal: ";
    while(cin >> binary)
    {
        if(binary==-1)
            break;

        while(binary>0)
        {
            decimal += bit*(binary%10);
            bit *= 2;
            binary = binary/10;

        }

        cout << "Decimal number: " << decimal << endl;
        cout << "Convert binary to decimal: ";

        decimal = 0; //reset
        bit =1;
        binary=0;
    }

    //reset the variable
    bit=1;
    decimal=0;
    binary=0;
    cout << endl;

    //E4-2
    cout << "Convert decimal to binary: ";
    while(cin >> decimal)
    {
        if(decimal==-1)
            break;

        while(decimal>0)
        {
            binary = binary + (decimal%2)*bit;
            bit *= 10;
            decimal /= 2;
        }

        cout << "Binary number: " << binary << endl;
        cout << "Convert decimal to binary: "  ;

        binary = 0;
        bit = 1;
        binary=0;
    }
    return 0;
}
