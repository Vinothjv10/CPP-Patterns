#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the row : ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int space = 1; space <= (n - i); space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}