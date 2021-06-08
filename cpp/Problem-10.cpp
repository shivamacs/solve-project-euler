/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
   Find the sum of all the primes below two million.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long num = 2000000, sum = 0, n=3;
    bool prime = true;

    while(n < num)
    {
        prime = true;
        for (int i=2;i<=sqrt(n);i++)
        {
            if (n%i == 0)
            {
                prime = false;
            }
        }
        if (prime) sum += n; 
        n += 1;
    }

    cout<<sum+2;
}