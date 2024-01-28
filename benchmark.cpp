#include <benchmark/benchmark.h>

constexpr int nelems = 2000;

bool is_prime(uint64_t n)
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
    
    for (uint64_t i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    
    return true;
}

bool is_prime_mine(int n)
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

static void bench_is_prime(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        for (int i=1; i<nelems; i++)
        {
            is_prime(i);
        }
    }
}

static void bench_is_prime_mine(benchmark::State& state) {
    // Perform setup here
    for (auto _ : state) {
        // This code gets timed
        for (int i=1; i<nelems; i++)
        {
            is_prime_mine(i);
        }
    }
}

// Register the function as a benchmark
// BENCHMARK(BM_generate_random_int_vector)->Range(1, 2)->UseManualTime();
BENCHMARK(bench_is_prime)->Range(1, 1<<10);
BENCHMARK(bench_is_prime_mine)->Range(1, 1<<10);
// BENCHMARK(bench_is_prime);
// Run the benchmark
BENCHMARK_MAIN();
