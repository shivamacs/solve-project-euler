/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
   a2 + b2 = c2
   For example, 32 + 42 = 9 + 16 = 25 = 52.
   There exists exactly one Pythagorean triplet for which a + b + c = 1000.
   Find the product abc.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool triplet = false;
    float a = 500.0, b = 499.0, c;
    int k = 0;

    for (float i = a;i>=2;i--)
    {
        for (float j = b;j>=2;j--)
        { 
            c = sqrt((i*i) + (j*j));
            
            if (c<i || c<j) continue;
            else 
            {
                if ((i+j+c) == 1000.000)
                {
                    a = i;
                    b = j;
                    triplet = true;
                    break;
                }
            }
        }
        if (triplet == true) break;
    }

    if (triplet) cout<<int(a*b*c);
}