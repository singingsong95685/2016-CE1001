#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int i = 0, j = 0;
	int count = 0;

     cout << "input N:";
     cin >> n;
     cout <<"f("<< n << "):";

     for (i = 1; i <= n; i++)    //¦]factor(x) factor count (x)
	{
		if (n%i == 0)
			{
			cout << i<<" " ;
			count++;
			}
	}
    cout << endl;
	cout << "factor count (" << n <<"):" << count << "\n";

	if (n >= 2)                                //1~X prime number
	{
		cout <<"1~"<< n << "prime number:";   // 2 is only prime in even
		if (n >= 2)
			cout << "2" << " ";
		for (i = 3; i < n; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i%j == 0)
					break;
				else if (i == j + 1)
					cout << i << " ";
			}
		}
		cout << endl;
	}
	int k = 1;

	cout << "1~"<< n <<"are multiples of 3 and 7:" ;

	while (k <= n)
	{
		if (k % 3 == 0 || k % 7 == 0)
		{
			cout << k << " ";
		}

		k++;

	}
	if(n<3)
        cout << "not exist" <<endl;

	cout << endl;
	return 0;
}
