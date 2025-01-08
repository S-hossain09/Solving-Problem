/*
    Explanation:

    | 1   2   9   10  25 |
    | 4   3   8   11  24 |
    | 5   6   7   12  23 |
    | 16  15  14  13  22 |
    | 17  18  19  20  21 |


    If we look at the grid:
    y -> Row
    x -> Col

    From left to right: y elements are consecutive
    From top to bottom: x elements are consecutive

    So we can say that:

    * If y < x:
        then we have to calculate from the top and
        reach our way down.

    * If y <= x:
        then we have calculate from the left and
        reach our way right.

    * From top to bottom calculation:
        As we can see the squared number of odd element
        is in the top row. We will use this information
        to calculate our way down.

        we will check if x is odd or not.
        * if x == odd:
            We can see that if x is odd, the elements below are
            reducing.

            (x^2) - (y - 1)

        * if x == even:
            As there is no perfect squared number of even elements
            in the top row we are taking an odd squared number and
            adding 1 to get the top element:

            We can see that if x is even, the elements below are
            increasing.

            ((x-1)^2 + 1) + (y-1)

    * From left to right calculation:
        As we can see the squared number of even element
        is in the left column . We will use this information
        to calculate our way right.

        we will check if y is even or not.
        * if y == odd:
            As there is no perfect squared number of odd elements
            in the leftmost col we are taking an even squared number and
            adding 1 to get the left element:

            We can see that if y is odd, the elements right are
            increasing.

            ((y-1)^2 + 1) + (x - 1)

        * if y == even:
            We can see that if y is even, the elements right are
            reducing.

            (y^2) - (x - 1)

    * Time Complexity Calcution:
        As each test case contains 10^5 elements
        and y,x contains 10e9 elements. 

        The worst case might be 10^(5 + 9 + 9) = 10^23.

        Which is why we chose to do it mathematically.
        It will be solved in O(1) time.


*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long y, x;
        cin >> y >> x;

        long long sum = 0;
        if (y < x)
        {
            if (x & 1)
            {
                sum = (x * x) - (y - 1);
            }
            // If x is odd.
            else
            {
                sum = (((x - 1) * (x - 1)) + 1) + (y - 1);
            }
            // If x is even
        }
        // Top to bottom calculation

        else
        {
            if (y & 1)
            {
                sum = (((y - 1) * (y - 1)) + 1) + (x - 1);
            }
            // If y is odd
            else
            {
                sum = (y * y) - (x - 1);
            }
            // If y is even

        }
        // Left to right claculation

        cout << sum << endl;
    }
    return 0;
}