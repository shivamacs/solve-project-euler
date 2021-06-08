/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
   What is the 10,001st prime number?
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1, num = 2, last = 10001;
    bool prime = true;

    while(count != last)
    {
        prime = true;
        num += 1;
        for (int i = 2;i <= sqrt(num);i++)
        {
            if (num%i == 0) prime = false;
        }
        if (prime) count++;
    } 

    cout<<num;
}