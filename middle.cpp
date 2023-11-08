#include <cstdint>
#include <iostream>

const int N = 200000;
/*
 * javier suarez jimenez
 */

bool is_prime(uint32_t n)
{
    for (uint32_t i=2; i<(n/2)+1; i++)
    {
        if ( (n % i) == 0 )
        {
            return false;
        }
    }
    return true;
}

int main()
{
    uint32_t k = 0;
    for (int i=1; i<N; i++)
    {
        if ( is_prime(i) )
        {
            k += i;
            // std::cout << ++j << ": " << i << '\n';
        }
    }
    std::cout << k << '\n';

    return 0;
}
