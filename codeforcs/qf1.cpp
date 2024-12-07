#include <iostream>

using namespace std;
/*
int p(int x)
{
    int an = 0;

    for (int i = 2; i < 10; i++)
    {
        if (x % i == 0 && i != x)
        {
            an = 1;
            break;
        }
    }
    return an;
}*/

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       long long  a, b;
        cin >> a >> b;
       long long  x, y;

        if (b == 0 && a == 0)
        {

            cout << 0 << endl;
        }

     /*  else if ((b == 0 && a == 1) || (a == 1 && b == 0))
        {

            cout << 1 << endl;
            cout << a << " " << b << endl;
        }

        else if (b == 0 && a != 0)
        {

            x = a;
            y = b + 1;
            cout << 2 << endl;
            cout << x << " " << y << endl;
            cout << a << " " << b << endl;
        }
       /* else if ((p(a) == 0 || p(b) == 0) && (a % b != 0) && (b % a != 0) && (b != 0) && (a != 0))
        {
            cout << 1 << endl;
            cout << a << " " << b << endl;
        }
        )/*
        else if (a == 0 && b != 0)
        {

            x = a + 1;
            y = b;
            cout << 2 << endl;
            cout << x << " " << y << endl;
            cout << a << " " << b << endl;
        }

        else if (b == 1)
        {

            cout << 1 << endl;
            cout << a << " " << b << endl;
        }

        else if (a == 1)
        {

            cout << 1 << endl;
            cout << a << " " << b << endl;
        }*/
        else
        {
            x = a - 1, y = 1;

            cout << 2 << endl;
            cout << x << " " << y << endl;
            cout << a << " " << b << endl;
        }
    }
}//260501249 362410575
