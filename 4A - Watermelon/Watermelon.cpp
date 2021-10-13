#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    if (input == 2 || input % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
