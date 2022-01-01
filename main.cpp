#include <iostream>
#include <vector>
#include <string>

const int N = 200000;
/*
 * javier
 */

bool isPrime(int n)
{
    //isPrime comment
    if ( n == 1 || n == 2 )
    {
        return true;
    }
    else {
        for (int i=2; i<(n/2)+1; i++)
        {
            if ( (n % i) == 0 )
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    // int j = 0;
    long long k = 0;
    for (int i=1; i<N; i++)
    {
        if ( isPrime(i) )
        {
            k += i;
            // std::cout << ++j << ": " << i << std::endl;
        }
    }
    std::cout << k << std::endl;

    return 0;
}
