#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numWords;
    cin >> numWords;

    for (int i = 0; i < numWords; i++)
    {
        string str;
        cin >> str;
        int strLen = str.length();

        if (strLen > 10)
        {
            char left = str[0];
            char right = str[strLen - 1];
            int between = strLen - 2;
            string output = left + to_string(between) + right;
            cout << output + "\n";
        }
        else
        {
            cout << str + "\n";
        }
    }

    return 0;
}
