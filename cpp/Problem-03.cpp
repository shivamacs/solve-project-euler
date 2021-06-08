/* The prime factors of 13195 are 5, 7, 13 and 29.
   What is the largest prime factor of the number 600851475143 ?
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = INT_MIN;
    unsigned long n = 600851475143;

    while(n % 2 == 0)
    {
        if (2 > max) max = 2;
        n = n/2;
    }

    for (int i = 3;i <= sqrt(n);i += 2)
    {
        while(n%i == 0)
        {
            if (i > max) max = i;
            n = n/i;
        }
    }

    if (n > 2){
        if (n > max) max = n;
    };

    cout<<max;
}