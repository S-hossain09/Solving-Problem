#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "++x")
        {
            ++x;
        }
        else if (arr[i] == "x++")
        {
            x++;
        }
        else if (arr[i] == "--x")
        {
            --x;
        }
        else if (arr[i] == "x--")
        {
            x--;
        }
    }

    cout << x;
    return 0;
}