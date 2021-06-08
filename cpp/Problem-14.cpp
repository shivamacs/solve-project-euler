/* The following iterative sequence is defined for the set of positive integers:

    n → n/2 (n is even)
    n → 3n + 1 (n is odd)

    Using the rule above and starting with 13, we generate the following sequence:
                                        13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
    It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been 
    proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

    Which starting number, under one million, produces the longest chain?

    NOTE: Once the chain starts the terms are allowed to go above one million.
*/
#include <bits/stdc++.h>
using namespace std;

#define LIMIT 1000001

typedef long long ll;

int chainCount(ll n, int *count) {
    if(n > 1000000) {
        if(n % 2 == 0)
            return 1 + chainCount(n / 2, count);
        else 
            return 1 + chainCount((3 * n) + 1, count);
    }

    if(count[n] != 0)
        return count[n];

    if(n == 1)
        count[n] = 1;
    else {
        if(n % 2 == 0)
            count[n] = 1 + chainCount(n / 2, count);
        else 
            count[n] = 1 + chainCount((3 * n) + 1, count);
    }

    return count[n];
}

int main() 
{
    int chain = 0, longest = 0, num;
    int count[LIMIT];
    memset(count, 0, sizeof(count));

    for(int i = LIMIT - 1; i >= 500000; i--) {
        chain = chainCount(ll(i), count);
        if(chain > longest) {
            longest = chain;
            num = i;
        }
    }

    cout<<num<<endl;
}