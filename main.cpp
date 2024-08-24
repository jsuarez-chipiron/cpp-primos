#include <cstdint>
#include <iostream>

const int N = 200000;
/*
 * javier suarez jimenez
 */

bool is_prime(uint32_t n)
{
    if (n <= 1)
    {
        return false;
    }
    
    if (n <= 3)
    {
        return true;
    }
    
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    
    for (uint32_t i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    uint64_t k = 0;
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
