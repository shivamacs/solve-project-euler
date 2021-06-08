/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <bits/stdc++.h>
using namespace std;

int sumDivisibleBy(int target, int div) {
    int n = target / div;
    return div * ((n * (n + 1)) / 2);
}

int main()
{
    cout<<sumDivisibleBy(999, 3) + sumDivisibleBy(999, 5) - sumDivisibleBy(999, 15)<<endl;
}