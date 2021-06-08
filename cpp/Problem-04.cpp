/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
   Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first = 999, second = 999;
    long product, remainder, reversedInteger = 0, original, max = 0;

    for (int i = first; i >= 100; i--)
    {
        for (int j = second; j >= i;    j--)
        {
            product = i * j;

            if(product <= max)
                break;

            original = product;
            reversedInteger = 0;
            while(product != 0)
            {
                remainder = product % 10;
                reversedInteger = reversedInteger * 10 + remainder;
                product /= 10;
            }
            if (reversedInteger == original) { if (original > max) max = original; }
        }
    }

    cout<<max<<endl;
}