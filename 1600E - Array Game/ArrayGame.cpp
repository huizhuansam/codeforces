#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arrLen;
    cin >> arrLen;
    int arr[arrLen];

    for (int i = 0; i < arrLen; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = arrLen - 1;

    // Move left pointer forward until next element is non-increasing
    while (((left + 1) < arrLen) && (arr[left] < arr[left + 1])) left++;
    // Move right pointer backward until (reversed) next element is non-increasing
    while (((right - 1) >= 0) && (arr[right] < arr[right - 1])) right--;
    // Number of moves possible taking from left
    left++;
    // Number of moves possible taking from right
    right = arrLen - right;
    // If odd left moves or right moves are possible, Alice wins, else Bob wins
    (left % 2 || right % 2) ? cout << "Alice" : cout << "Bob";

    return 0;
}
