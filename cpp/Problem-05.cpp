/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
   What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <bits/stdc++.h>
using namespace std;

unsigned long evenlyDivisible(unsigned long num)
{
    int div;
    bool divisible = false;
    int last = num;

    while(divisible == false)
    {
        for (int i = 2; i <= last; i++)
        {
            if (num%i != 0) {
                divisible = false;
                div = i;
                break;
            }
            else divisible = true;
        }
        if (divisible == false) num = num*div;
    }

    if (divisible) return num;
    else return -1;
}

int main()
{
    bool next = false;
    unsigned long num = 30, min, smallNum = evenlyDivisible(num);
    min = smallNum;
    for (int i = 2;i <= num;i++)
    {   
        next = false;
        smallNum = smallNum / i;

        for (int j = 2; j <= num; j++)
        {
            if (smallNum%j != 0)
            {
                next = true;
                break;
            }
        }
        if (next) smallNum *= i;
        else if (smallNum < min) min = smallNum;
    }

    cout<<min<<endl;
}