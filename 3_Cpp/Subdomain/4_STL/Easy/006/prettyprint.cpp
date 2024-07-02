#include <iostream>
#include <iomanip>

using namespace std;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout <<nouppercase<< showbase << hex << (long long)a <<"\n"; //prints the first line

    int count = 0, temp = (int)b;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    int no_dashes = 15 - count - 4;

    while (no_dashes--)
        cout << '_';
    (b >= 0) ? cout << '+' : cout << '-';
    cout << fixed << setprecision(2) << b << "\n"; //prints the second line

    cout << uppercase << scientific << setprecision(9) << c << "\n"; //prints the last line
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
